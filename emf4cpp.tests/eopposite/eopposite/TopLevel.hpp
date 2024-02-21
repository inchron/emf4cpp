// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * eopposite/TopLevel.hpp
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

#ifndef EOPPOSITE_TOPLEVEL_HPP
#define EOPPOSITE_TOPLEVEL_HPP

#include <eopposite/dllEopposite.hpp>
#include <eopposite_forward.hpp>

#include <ecore_forward.hpp>
#include <eopposite/NamedObject.hpp>

#include "EoppositePackage.hpp"

/*PROTECTED REGION ID(TopLevel_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace eopposite
{

class EXPORT_EOPPOSITE_DLL TopLevel : public virtual ::eopposite::NamedObject
{
public:
    TopLevel();

    ~TopLevel() override;

    void _initialize() override;

    // Operations

    // Attributes

    // References
    virtual const ::ecorecpp::mapping::EList< ::eopposite::LeftHand_ptr >& getLeftees () const;
    virtual ::ecorecpp::mapping::EList< ::eopposite::LeftHand_ptr >& getLeftees ();

    virtual const ::ecorecpp::mapping::EList< ::eopposite::RightHand_ptr >& getRightees () const;
    virtual ::ecorecpp::mapping::EList< ::eopposite::RightHand_ptr >& getRightees ();

    virtual const ::ecorecpp::mapping::EList< ::eopposite::RightMultiple_ptr >& getRightMultiples () const;
    virtual ::ecorecpp::mapping::EList< ::eopposite::RightMultiple_ptr >& getRightMultiples ();

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = EoppositePackage::TOPLEVEL;

    /*PROTECTED REGION ID(TopLevel) START*/
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

    /*PROTECTED REGION ID(TopLevelImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    TopLevel_ptr _this()
    {   return std::dynamic_pointer_cast<TopLevel>(shared_from_this());}

    // Attributes

    // References

    ::ecore::EList_ptr< ::eopposite::LeftHand_ptr > m_leftees;

    ::ecore::EList_ptr< ::eopposite::RightHand_ptr > m_rightees;

    ::ecore::EList_ptr< ::eopposite::RightMultiple_ptr > m_rightMultiples;

};

}
 // eopposite

#endif // EOPPOSITE_TOPLEVEL_HPP

