// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * XMLSerializer.cpp
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "XMLSerializer.hpp"

#include <algorithm>

#include <ecore.hpp>
#include <ecore_forward.hpp>
#include <ecorecpp/exception/ReferenceStringCreationException.hpp>
#include <ecorecpp/mapping/EListImpl.hpp>
#include <ecorecpp/resource/XMLResource.hpp>

#include "../util/debug.hpp"
#include "../mapping.hpp"

using namespace ::ecorecpp::serializer;
using namespace ::ecore;

using ::ecorecpp::mapping::type_definitions::string_t;

XMLSerializer::XMLSerializer( std::ostream& os )
	: m_out(os) {
}

void XMLSerializer::setIndentMode(XmiIndentMode mode) {
	m_mode = mode;
	m_ser.setIndent(m_mode == XmiIndentMode::Indentation);
}

XMLSerializer::XmiIndentMode XMLSerializer::getIndentMode() const {
	return m_mode;
}

void XMLSerializer::setKeepDefault(bool kd) {
	m_keepDefault = kd;
}

bool XMLSerializer::getKeepDefault() const {
	return m_keepDefault;
}

void XMLSerializer::setExtendedMetaData(bool b) {
	if (b)
		m_extendedMetaData = ::ecorecpp::util::ExtendedMetaData::_instance();
	else
		m_extendedMetaData = ::ecore::Ptr<util::ExtendedMetaData>();
}

bool XMLSerializer::getExtendedMetaData() const {
	return !!m_extendedMetaData;
}

void XMLSerializer::setExternalReferences(
		const std::list<::ecorecpp::parser::Reference>& refs) {
	_unresolvedReferences.clear();
	for ( const auto& ref : refs )
		_unresolvedReferences.emplace(ref._obj, ref);
}

void XMLSerializer::serialize(const ::ecorecpp::mapping::EList<::ecore::EObject_ptr>::ptr_type& objlist) {
	const bool hasManyRootObjects = objlist->size() > 1;
	// Serialize the top level object into m_internalBuffer
	// First remove the XML processing instruction
	m_internalBuffer.str(::ecorecpp::mapping::type_definitions::string_t());
	// Then change the internal state but do not output anything
	m_ser.open_object("", greedy_serializer::SilentMode::Silent);

	::ecorecpp::mapping::type_definitions::string_t root_name;
	for ( const auto obj : *objlist ) {
		if (m_extendedMetaData) {
			auto root_eClass = obj->eClass();
			DEBUG_MSG(cerr, "name " << m_extendedMetaData->getName(root_eClass) );
			if (m_extendedMetaData->isDocumentRoot(root_eClass)) {
				DEBUG_MSG(cerr, "DocumentRoot detected");
				throw std::logic_error("Cannot persist DocumentRoot");
			} else
				DEBUG_MSG(cerr, "DocumentRoot not detected");
		}


		EClass_ptr cl = obj->eClass();
		EPackage_ptr pkg = cl->getEPackage();
		m_usedPackages.push_back(pkg);

		root_name = get_type(obj);
		if ( m_extendedMetaData && obj->eContainer()
			 && m_extendedMetaData->isDocumentRoot(obj->eContainer()->eClass()) ) {
			root_name = get_reference(obj);
		}

		if ( hasManyRootObjects )
			m_ser.open_object(root_name, greedy_serializer::SilentMode::Loud);
		// Output attributes and child nodes
		serialize_node(obj);
		if ( hasManyRootObjects )
			m_ser.close_object(root_name, greedy_serializer::SilentMode::Loud);
	}

	if ( hasManyRootObjects )
		root_name = "xmi::XMI";
	// The current state of m_internalBuffer controls the closing tag
	m_ser.close_object(root_name, greedy_serializer::SilentMode::Loud);

	// Create a new serializer for the real output.
	greedy_serializer output(m_out, m_mode == XmiIndentMode::Indentation);
	output.open_object(root_name);

	// common attributes, following standard EMF order
	if (!m_extendedMetaData) {
		// xmi:version="2.0"
		output.add_attribute("xmi:version", "2.0");
		// xmlns:xmi="http://www.omg.org/XMI"
		output.add_attribute("xmlns:xmi", "http://www.omg.org/XMI");
	}
	// xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
	output.add_attribute("xmlns:xsi", "http://www.w3.org/2001/XMLSchema-instance");

	// sort and unify according to EPackage name
	std::sort(m_usedPackages.begin(), m_usedPackages.end(),
			[](const EPackage_ptr& lhs, const EPackage_ptr& rhs) -> bool {
				return lhs->getName() < rhs->getName(); });
	m_usedPackages.erase(std::unique(m_usedPackages.begin(), m_usedPackages.end()),
						 m_usedPackages.end());

	for ( auto pkg : m_usedPackages ) {
		::ecorecpp::mapping::type_definitions::string_t const& ns_uri = pkg->getNsURI();
		::ecorecpp::mapping::type_definitions::stringstream_t root_namespace;
		if (!m_extendedMetaData || m_extendedMetaData->isQualified(pkg)) {
			root_namespace << "xmlns:" << pkg->getName();
			output.add_attribute(root_namespace.str(),ns_uri); // root element namespace URI
		}
	}

	// m_internalBuffer is already correctly closed
	output.append(m_internalBuffer.str());
}

::ecorecpp::mapping::type_definitions::string_t
XMLSerializer::get_type(EObject_ptr obj) const {
	EClass_ptr cl = obj->eClass();

	::ecorecpp::mapping::type_definitions::stringstream_t ss;
	if (m_extendedMetaData) {
		auto ns = m_extendedMetaData->getNamespace(cl);
		if (!ns.empty())
			ss << ns << ":";
		ss << m_extendedMetaData->getName(cl);
	} else {
		ss << cl->getEPackage()->getName() << ":" << cl->getName();
	}
	return ss.str();
}

::ecorecpp::mapping::type_definitions::string_t
XMLSerializer::get_reference(::ecore::EObject_ptr obj) const {
	auto ef = obj->eContainingFeature();
	::ecorecpp::mapping::type_definitions::stringstream_t ss;
	if (m_extendedMetaData) {
		auto ns = m_extendedMetaData->getNamespace(ef);
		if (!ns.empty())
			ss << ns << ":";
		ss << m_extendedMetaData->getName(ef);
	} else {
		ss << obj->eContainer()->eClass()->getEPackage()->getName() << ":" << ef->getName();
	}
	return ss.str();
}

::ecorecpp::mapping::type_definitions::string_t XMLSerializer::get_reference(
			::ecore::EObject_ptr from, ::ecore::EObject_ptr to,
			bool crossDocument ) const {
	::ecorecpp::resource::Resource_ptr fromResource = from->eResource();
	if ( !fromResource ) {
		const std::string msg{
			"The reference string could not be retrieved for source EObject of type '" +
				from->eClass()->getName() +
				"' and destination EObject of type '" +
				to->eClass()->getName() +
				"' because the source object is not assigned to any resource."};
		throw ::ecorecpp::exception::ReferenceStringCreationException(msg,
				from, to, crossDocument);
	}
	::ecorecpp::resource::Resource_ptr toResource = to->eResource();
	if ( !toResource ) {
		const std::string msg{
			"The reference string could not be retrieved for source EObject of type '" +
				from->eClass()->getName() +
				"' and destination EObject of type '" +
				to->eClass()->getName() +
				"' because the destination object is not assigned to any resource."};
		throw ::ecorecpp::exception::ReferenceStringCreationException(msg,
				from, to, crossDocument);
	}

	QUrl referenceUri = toResource->getURI();
	referenceUri.setFragment(QString::fromStdString(toResource->getURIFragment(to)));

#ifdef ECORECPP_USE_WSTRING
	if (crossDocument) {
		return ( fromResource == toResource )
				? (QString("#") + referenceUri.fragment(QUrl::FullyEncoded)).toStdWString()
				: referenceUri.toString(QUrl::FullyEncoded).toStdWString();
	}

	return referenceUri.fragment(QUrl::FullyEncoded).toStdWString();
#else
	if (crossDocument) {
		return ( fromResource == toResource )
				? (QString("#") + referenceUri.fragment(QUrl::FullyEncoded)).toStdString()
				: referenceUri.toString(QUrl::FullyEncoded).toStdString();
	}

	return referenceUri.fragment(QUrl::FullyEncoded).toStdString();
#endif
}

void XMLSerializer::create_node(::ecore::EObject_ptr parent_obj,
                        EObject_ptr child_obj, EStructuralFeature_ptr ef) {
	auto nodeName = ef->getName();
	if (m_extendedMetaData)
		nodeName = m_extendedMetaData->getName(ef);
	m_ser.open_object(nodeName);

    EClass_ptr child_cl = child_obj->eClass();

    // May be a subtype
    if (child_cl != ef->getEType()) {
        m_ser.add_attribute("xsi:type", get_type(child_obj));
		m_usedPackages.push_back(child_cl->getEPackage());
	}

	auto resource = std::dynamic_pointer_cast<resource::XMLResource>(child_obj->eResource());
	if (resource) {
		if (resource->useIDs() || resource->useUUIDs()) {
			auto id = resource->getID(child_obj);
			if (!id.empty())
				m_ser.add_attribute("xmi:id", id);
		}
	}

    serialize_node(child_obj);

    m_ser.close_object(nodeName);
}

void XMLSerializer::create_crossref_node(::ecore::EObject_ptr parent_obj,
                        EObject_ptr child_obj, EStructuralFeature_ptr ef) {

	auto nodeName = ef->getName();
	if (m_extendedMetaData)
		nodeName = m_extendedMetaData->getName(ef);
	m_ser.open_object(nodeName);

    EClass_ptr child_cl = child_obj->eClass();

    // May be a subtype
    if (child_cl != ef->getEType()) {
        m_ser.add_attribute("xsi:type", get_type(child_obj));
		m_usedPackages.push_back(child_cl->getEPackage());
	}
	m_ser.add_attribute("href", get_reference(parent_obj, child_obj, true));

    m_ser.close_object(nodeName);
}

void XMLSerializer::serialize_node(EObject_ptr obj) {
	++m_level;

	serialize_node_attributes(obj);
	serialize_node_children(obj);

	--m_level;
}

void XMLSerializer::serialize_node_attributes(EObject_ptr obj) {
#ifdef DEBUG
	::ecorecpp::mapping::type_definitions::string_t indent(m_level, '\t');
#endif

	EClass_ptr cl = obj->eClass();

	/*
	 *
	 * Node attributes
	 *
	 */
	::ecorecpp::mapping::EList<EAttribute_ptr>& attributes =
			cl->getEAllAttributes();

	/*
	 * Multiplicity-one attributes
	 */
	for (auto const& current_at : attributes) {
		if ( current_at->isTransient() || current_at->isDerived()
				|| current_at->getUpperBound() != 1
				|| (!obj->eIsSet(current_at) && !m_keepDefault) )
			continue;

		auto attributeName = current_at->getName();
		if (m_extendedMetaData)
			attributeName = m_extendedMetaData->getName(current_at);

		EClassifier_ptr at_classifier = current_at->getEType();

		DEBUG_MSG(cerr, indent << attributeName << " (from " << current_at->getName() << ")");

		EDataType_ptr atc = as< EDataType >(at_classifier);
		if (atc) {
			EFactory_ptr fac =
					at_classifier->getEPackage()->getEFactoryInstance();
			ecorecpp::mapping::any any = obj->eGet(current_at);

			::ecorecpp::mapping::type_definitions::string_t value =
					fac->convertToString(atc, any);

			DEBUG_MSG(cerr, indent << attributeName
					  << value);

			if ( (!value.empty() && value
					!= current_at->getDefaultValueLiteral())
				|| (m_keepDefault && value
					== current_at->getDefaultValueLiteral())) {
				m_ser.add_attribute(attributeName, value);
			}
		} else {
			// TODO: possible? Yes, for non-ecore built-in types!
		}
	}

	/*
	 * Non-containment references
	 */
	::ecorecpp::mapping::EList<EReference_ptr>& references =
			cl->getEAllReferences();

	std::vector<std::array<::ecorecpp::mapping::type_definitions::string_t, 3>> crossReferences;

	for ( auto const& current_ref : references ) {
		if ( current_ref->isTransient() || current_ref->isDerived()
				|| current_ref->isContainment()
				|| !obj->eIsSet(current_ref) )
			continue;

		auto referenceName = current_ref->getName();
		if (m_extendedMetaData)
			referenceName = m_extendedMetaData->getName(current_ref);

		DEBUG_MSG(cerr, indent << referenceName << " (from " << current_ref->getName() << ")");

		ecorecpp::mapping::any any = obj->eGet(current_ref);
		::ecorecpp::mapping::type_definitions::stringstream_t value;

		if (current_ref->getUpperBound() != 1) {
			mapping::EList<::ecore::EObject_ptr>::ptr_type children =
					ecorecpp::mapping::any::any_cast<
						mapping::EList<::ecore::EObject_ptr>::ptr_type >(any);
			// Remove expired references first
			children->cleanup();

			const bool isCrossDocumentReference =
					std::any_of( children->begin(), children->end(),
					[obj](::ecore::EObject_ptr child){
							return obj->eResource() != child->eResource(); } );

			for ( size_t ind = 0; ind < children->size(); ++ind ) {
				auto child = children->get(ind);
				auto ref = get_reference(obj, child, isCrossDocumentReference);
				if ( isCrossDocumentReference ) {
					std::array<::ecorecpp::mapping::type_definitions::string_t, 3> crossRef;
					crossRef[0] = referenceName;

					if (child->eClass() != current_ref->getEType()) {
						crossRef[1] = get_type(child);
						m_usedPackages.push_back(child->eClass()->getEPackage());
					}

					crossRef[2] = ref;
					crossReferences.push_back(crossRef);
				} else {
					value << ref;
					if (ind+1 != children->size())
						value << " ";
				}
			}
		} else {
			EObject_ptr child =
					ecorecpp::mapping::any::any_cast< EObject_ptr >(any);
			if (child) {
				const bool isCrossDocumentReference =
						obj->eResource() != child->eResource();

				auto ref = get_reference(obj, child, isCrossDocumentReference);
				if (isCrossDocumentReference) {
					std::array<::ecorecpp::mapping::type_definitions::string_t, 3> crossRef;
					crossRef[0] = referenceName;

					if (child->eClass() != current_ref->getEType()) {
						crossRef[1] = get_type(child);
						m_usedPackages.push_back(child->eClass()->getEPackage());
					}

					crossRef[2] = ref;
					crossReferences.push_back(crossRef);
				} else {
					value << ref;
				}
			}
		}

		if (!value.str().empty())
			m_ser.add_attribute(referenceName, value.str());
	}

	/*
	 * Cross references to other Resources
	 */
	for ( auto const& crossRef : crossReferences ) {
		m_ser.open_object(crossRef[0]);
		if ( !crossRef[1].empty() ) {
			m_ser.add_attribute("xsi:type", crossRef[1]);
		}
		m_ser.add_attribute("href", crossRef[2]);
		m_ser.close_object(crossRef[0]);
	}

	auto range = _unresolvedReferences.equal_range(obj);
	for ( auto it = range.first; it != range.second; ++it ) {
		auto& ref = it->second;
		try {
			auto eref = ::ecore::as<::ecore::EReference>(
					getEStructuralFeature(cl, ref._featureName) );
			if ( !eref || eref->isContainment() )
				continue;

		} catch (...) {
			continue;
		}

		m_ser.open_object(ref._featureName);
		if ( !ref._refType.empty() )
			m_ser.add_attribute("xsi:type", ref._refType);
		m_ser.add_attribute("href", ref._href);
		m_ser.close_object(ref._featureName);
	}

	/*
	 * Multiplicity-many attributes
	 */
	for (auto const& current_at : attributes) {
		if ( current_at->isTransient() || current_at->isDerived()
				|| current_at->getUpperBound() == 1
				|| !obj->eIsSet(current_at) )
			continue;

		auto attributeName = current_at->getName();
		if (m_extendedMetaData)
			attributeName = m_extendedMetaData->getName(current_at);

		EClassifier_ptr at_classifier = current_at->getEType();

		DEBUG_MSG(cerr, indent << attributeName << " (from " << current_at->getName() << ")");

		EDataType_ptr atc = as< EDataType >(at_classifier);
		if (atc) {
			EFactory_ptr fac =
					at_classifier->getEPackage()->getEFactoryInstance();
			ecorecpp::mapping::any any = obj->eGet(current_at);

			std::vector< ecorecpp::mapping::any > anys =
					ecorecpp::mapping::any::any_cast<
						std::vector<ecorecpp::mapping::any> >(any);

			for (auto const& currAny : anys) {
				::ecorecpp::mapping::type_definitions::string_t value =
					fac->convertToString(atc, currAny);

				DEBUG_MSG(cerr, indent << attributeName
						  << " " << value);

				m_ser.open_object(attributeName);
				m_ser.add_value(value);
				m_ser.close_object(attributeName);
			}
		} else {
			// TODO: possible?
		}
	}
}

void XMLSerializer::serialize_node_children(EObject_ptr obj) {
	::ecorecpp::mapping::EList<EReference_ptr>& references =
			obj->eClass()->getEAllReferences();

#ifdef DEBUG
	::ecorecpp::mapping::type_definitions::string_t indent(m_level, '\t');
#endif

	auto objResource = obj->eResource();

	/*
	 * Containment references
	 */
	for ( auto const& current_ref : references ) {
		auto referenceName = current_ref->getName();
		if (m_extendedMetaData)
			referenceName = m_extendedMetaData->getName(current_ref);

		DEBUG_MSG(cerr, indent << referenceName << " (from " << current_ref->getName() << ")");

		if ( current_ref->isTransient() || current_ref->isDerived()
				|| !current_ref->isContainment()
				|| !obj->eIsSet(current_ref) )
			continue;

		ecorecpp::mapping::any any = obj->eGet(current_ref);

		if (current_ref->getUpperBound() != 1) {
			mapping::EList<::ecore::EObject_ptr>::ptr_type children =
					ecorecpp::mapping::any::any_cast<
						mapping::EList<::ecore::EObject_ptr>::ptr_type >(any);

			for ( auto const& child : *children ) {
				if (objResource != child->eResource())
					create_crossref_node(obj, child, current_ref);
				else
					create_node(obj, child, current_ref);
			}

		} else {
			EObject_ptr child =
					ecorecpp::mapping::any::any_cast<EObject_ptr>(any);
			if (child) {
				if (objResource != child->eResource())
					create_crossref_node(obj, child, current_ref);
				else
					create_node(obj, child, current_ref);
			}
		}

		auto range = _unresolvedReferences.equal_range(obj);
		for ( auto it = range.first; it != range.second; ++it ) {
			const auto& ref = it->second;
			try {
				auto eref = ::ecore::as<::ecore::EReference>(
						getEStructuralFeature(obj->eClass(),
						ref._featureName) );

				if ( !eref || !eref->isContainment() )
					continue;

			} catch (...) {
				continue;
			}

			m_ser.open_object(ref._featureName);

			// May be a subtype
			if ( !ref._refType.empty() )
				m_ser.add_attribute("xsi:type", ref._refType);

			m_ser.add_attribute("href", ref._href);
			m_ser.close_object(ref._featureName);
		}
	}
}

::ecore::EStructuralFeature_ptr XMLSerializer::getEStructuralFeature(::ecore::EClass_ptr eclass,
		::ecorecpp::mapping::type_definitions::string_t name) const {
	if (m_extendedMetaData) {
		for (const auto& ef : eclass->getEAllStructuralFeatures()) {
			if (m_extendedMetaData->getName(ef) == name)
				return ef;
		}
	}
	return eclass->getEStructuralFeature(name);
}
