// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EAnnotation.hpp
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

#ifndef ECORE_EANNOTATION_HPP
#define ECORE_EANNOTATION_HPP

#include <ecore/dllEcore.hpp>
#include <ecore_forward.hpp>

#include <ecore/EModelElement.hpp>

/*PROTECTED REGION ID(EAnnotation_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace ecore
{

class EXPORT_ECORE_DLL EAnnotation : public virtual ::ecore::EModelElement
{
public:
    EAnnotation();

    ~EAnnotation() override;

    void _initialize() override;

    // Operations

    // Attributes
    virtual ::ecore::EString const& getSource () const;
    virtual void setSource (::ecore::EString const& _source);

    // References
    virtual const ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& getDetails () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EStringToStringMapEntry_ptr >& getDetails ();

    virtual ::ecore::EModelElement_ptr getEModelElement () const;
    virtual void setEModelElement (::ecore::EModelElement_ptr _eModelElement);
    virtual ::ecore::EModelElement_ptr basicgetEModelElement ();
    virtual void basicsetEModelElement (::ecore::EModelElement_ptr _eModelElement);

    virtual const ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& getContents () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& getContents ();

    virtual const ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& getReferences () const;
    virtual ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >& getReferences ();

    /*PROTECTED REGION ID(EAnnotation) ENABLED START*/
    virtual bool hasDetail(::ecore::EString const&) const;
    virtual ::ecore::EString getDetail(::ecore::EString const&) const;
    virtual void setDetail(::ecore::EString const& key, ::ecore::EString const& value);
    virtual void removeDetail(::ecore::EString const& key);
    /*PROTECTED REGION END*/

    // EObjectImpl
    ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve) override;
    void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID) override;
    void eUnset ( ::ecore::EInt _featureID) override;
    ::ecore::EClass_ptr _eClass () override;
    void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue) override;
    void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue) override;

    /*PROTECTED REGION ID(EAnnotationImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    EAnnotation_ptr _this()
    {   return std::dynamic_pointer_cast<EAnnotation>(shared_from_this());}

    // Attributes

    ::ecore::EString m_source
    {};

    // References

    ::ecore::EList_ptr< ::ecore::EStringToStringMapEntry_ptr > m_details;

    std::weak_ptr< ::ecore::EModelElement > m_eModelElement;

    ::ecore::EList_ptr< ::ecore::EObject_ptr > m_contents;

    ::ecore::EList_ptr< ::ecore::EObject_ptr > m_references;

};

}
 // ecore

#endif // ECORE_EANNOTATION_HPP

