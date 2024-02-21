// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/XMLTypeDocumentRoot.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016-2019 <emf4cpp@inchron.com>
 * Copyright (C) INCHRON AG 2019-2023 <emf4cpp@inchron.com>
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

#ifndef TYPE_XMLTYPEDOCUMENTROOT_HPP
#define TYPE_XMLTYPEDOCUMENTROOT_HPP

#include <ecore/EObject.hpp>

#include <type/dllType.hpp>
#include <type_forward.hpp>

#include <ecore_forward.hpp>

#include "TypePackage.hpp"

/*PROTECTED REGION ID(XMLTypeDocumentRoot_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace type
{

class EXPORT_TYPE_DLL XMLTypeDocumentRoot : public virtual ::ecore::EObject
{
public:
    XMLTypeDocumentRoot();

    ~XMLTypeDocumentRoot() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual std::vector< ::ecore::EFeatureMapEntry > const& getMixed () const;
    virtual void setMixed (std::vector< ::ecore::EFeatureMapEntry > _mixed);

    virtual void addMixed (::ecore::EFeatureMapEntry const& _new_element_in_mixed);
    virtual void setMixedAt ( size_t _position, ::ecore::EFeatureMapEntry const& _new_element_in_mixed);
    virtual void deleteMixedAt ( size_t _position );

    virtual std::vector< ::type::String > getCDATA ();
    virtual std::vector< ::type::String > getComment ();
    virtual std::vector< ::type::String > getText ();

    // References
    virtual const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& getXMLNSPrefixMap () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& getXMLNSPrefixMap ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& getXSISchemaLocation () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& getXSISchemaLocation ();

    virtual const ::ecorecpp::mapping::EList< ::type::ProcessingInstruction_ptr >& getProcessingInstruction () const;
    virtual ::ecorecpp::mapping::EList< ::type::ProcessingInstruction_ptr >& getProcessingInstruction ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = TypePackage::XMLTYPEDOCUMENTROOT;

    /*PROTECTED REGION ID(XMLTypeDocumentRoot) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
    void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
    void eUnset ( ::ecore::EInt _featureID) override;
    ::ecore::EClass_ptr _eClass () override;
    void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

    /*PROTECTED REGION ID(XMLTypeDocumentRootImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    XMLTypeDocumentRoot_ptr _this()
    {   return std::dynamic_pointer_cast<XMLTypeDocumentRoot>(shared_from_this());}

    // Attributes

    std::vector< ::ecore::EFeatureMapEntry > m_mixed
    {};

    // References

    ::ecore::EList_ptr< ::ecore::EStringToStringMapEntry_ptr > m_xMLNSPrefixMap;

    ::ecore::EList_ptr< ::ecore::EStringToStringMapEntry_ptr > m_xSISchemaLocation;

    ::ecore::EList_ptr< ::type::ProcessingInstruction_ptr > m_processingInstruction;

};

}
 // type

#endif // TYPE_XMLTYPEDOCUMENTROOT_HPP

