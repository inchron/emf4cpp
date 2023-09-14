// -*- mode: c++; c-basic-offset: 4; -*-
/*
 * Copier/Copier.cpp
 * Copyright (C) INCHRON GmbH 2018 <stefan.quandt@inchron.com>
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

#include "Copier.hpp"
#include <ecore.hpp>
#include "../mapping.hpp"

namespace ecorecpp::util {

using namespace ecore;
using EList_ptr = mapping::EList<EObject_ptr>::ptr_type;

Copier::Copier( bool keepExternalReferences )
	: m_keepExternalRefs( keepExternalReferences ) { }

Copier::~Copier() = default;

/** If the object is a subtree of an EMF model then references to elements
 * outside the subtree cannot be resolved, unless the same Copier instance has
 * been used before to clone the whole model (i.e. the Copier instance is not
 * stateless but instead keeps track of objects from the source model).
 */
EObject_ptr Copier::clone( EObject_ptr obj ) {
	EObject_ptr clone = copy( obj );
	for ( auto& kv : m_objectsMap )
		copy_references( kv.first, kv.second );
	return clone;
}

/** The list of input objects is copied one by one. Afterwards all references
 * between the original objects and their subtrees are replaced by references
 * between the cloned objects. All references to objects, which are not part
 * of the subtrees formed by the input objects, are kept as they are depending
 * on m_keepExternalRefs.
 */
std::shared_ptr<mapping::EList< EObject_ptr > >
Copier::clone(const mapping::EList< EObject_ptr >& original) {
	auto clone = std::make_shared<
		mapping::EListImpl< EObject_ptr > >();
	for (auto&& object : original)
		clone->push_back( copy(object) );
	for ( auto& kv : m_objectsMap )
		copy_references( kv.first, kv.second );
	return clone;
}

/** Clone the given object, including its attributes. The original object and
 * the clone are inserted in m_objectsMap.
 *
 * For each containment reference, this method is called recursively and the
 * cloned objects are added instead of the original object.
 *
 * Non-containment references are not copied, i.e. in the cloned object they
 * are empty. \sa copy_references()
 *
 * Attributes marked as ID are not copied, unless m_exactCopy is set.
 */
EObject_ptr Copier::copy( EObject_ptr src ) {
	EClass_ptr cls = src->eClass();
	auto dst = cls->getEPackage()->getEFactoryInstance()->create( cls );
	assert( dst );
	assert( ! dst->eResource() );
	m_objectsMap[ src ] = dst;

	/* 1)  Copy attributes
	 */
	const auto& attributes = cls->getEAllAttributes();
	for (const auto & attribute : attributes) {
		EAttribute_ptr const& attr = attribute;
		if ( not attr->isChangeable() or attr->isDerived()
			 or not src->eIsSet( attr )
			 or (attr->isID() && !m_exactCopy) )
			continue;

		dst->eSet( attr, src->eGet( attr ) );
	}

	/* 2)  Recursively traverse references, deep copying all containments.
	 */
	const auto& ereferences = cls->getEAllReferences();
	for (const auto & ereference : ereferences) {
		EReference_ptr eref = ereference;
		if ( not eref->isContainment()
			 or not eref->isChangeable() or eref->isDerived()
			 or not src->eIsSet( eref ) )
			continue;

		mapping::any src_refs = src->eGet( eref );
		if ( eref->getUpperBound() != 1 ) {
			const auto& srcs = *mapping::any::any_cast<EList_ptr>( src_refs );

			mapping::any dst_refs = dst->eGet( eref );
			auto dsts = mapping::any::any_cast<EList_ptr>( dst_refs );
			assert( dsts->size() == 0 );

			for (const auto & srcObject : srcs) {
				auto child = mapping::any::any_cast<EObject_ptr>( srcObject );
				dsts->push_back( copy( child ) );
			}
		} else if ( auto child = mapping::any::any_cast<EObject_ptr>( src_refs ) )
			dst->eSet( eref, copy( child ) );
	}

	return dst;
}

/** Copy all non-containment references from the original object 'src' to the
 * cloned object 'dst'. Each element in the source list is checked for being
 * in the map of copied objects. Depending on that and on m_keepExternalRefs,
 * either the original object, the copied object or no object at all is
 * inserted into the destination list.
 *
 * The actual drop and insertion steps can be reimplemented by derived
 * classes. \sa keepReference(), \sa dropReference().
 */
void Copier::copy_references( EObject_ptr src, EObject_ptr dst ) {
	const auto& ereferences = src->eClass()->getEAllReferences();
	for (const auto & ereference : ereferences) {
		EReference_ptr eref = ereference;
		if ( eref->isContainment()
			 or not eref->isChangeable() or eref->isDerived()
			 or not src->eIsSet( eref ) )
			continue;

		mapping::any src_refs = src->eGet( eref );
		if ( eref->getUpperBound() != 1 ) {
			const auto& srcs = *mapping::any::any_cast<EList_ptr>( src_refs );
			for (const auto & srcObject : srcs) {
				if ( auto refObj = mapping::any::any_cast<EObject_ptr>( srcObject ) ) {
					auto it = m_objectsMap.find( refObj );
					const bool isWithinCopy = it != m_objectsMap.end();
					if ( isWithinCopy ) {
						keepReference(dst, eref, it->second);
					} else if ( m_keepExternalRefs ) {
						keepReference(dst, eref, refObj);
					} else {
						dropReference(dst, eref, refObj);
					}
				}
			}
		} else if ( auto refObj = mapping::any::any_cast<EObject_ptr>( src_refs ) ) {
			auto it = m_objectsMap.find( refObj );
			const bool isWithinCopy = it != m_objectsMap.end();
			if ( isWithinCopy ) {
				keepReference(dst, eref, it->second);
			} else if ( m_keepExternalRefs ) {
				keepReference(dst, eref, refObj);
			} else {
				dropReference(dst, eref, refObj);
			}
		}
	}
}

/** Default implementation if a reference to an object shall be copied.
 */
void Copier::keepReference(EObject_ptr dst, EReference_ptr eref,
						   EObject_ptr refObj) {
	if ( eref->getUpperBound() != 1 ) {
		mapping::any dst_refs = dst->eGet( eref );
		auto dsts = mapping::any::any_cast<EList_ptr>( dst_refs );
		dsts->push_back( refObj );
	} else {
		dst->eSet( eref, refObj );
	}
}

/** Default implementation if a reference to an object, which is external to
 * the copied tree, shall be dropped: Does nothing.
 */
void Copier::dropReference(EObject_ptr, EReference_ptr, EObject_ptr) { }


EObject_ptr Copier::get_clone( EObject_ptr original) {
	auto it = m_objectsMap.find(original);
	if (it != m_objectsMap.end())
		return it->second;
	return {};
}

} // util
// ecorecpp
