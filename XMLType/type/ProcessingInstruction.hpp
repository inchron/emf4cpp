// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * type/ProcessingInstruction.hpp
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

#ifndef TYPE_PROCESSINGINSTRUCTION_HPP
#define TYPE_PROCESSINGINSTRUCTION_HPP

#include <ecore/EObject.hpp>

#include <type/dllType.hpp>
#include <type_forward.hpp>

#include "TypePackage.hpp"

/*PROTECTED REGION ID(ProcessingInstruction_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace type
{

class EXPORT_TYPE_DLL ProcessingInstruction : public virtual ::ecore::EObject
{
public:
    ProcessingInstruction();

    virtual ~ProcessingInstruction();

    virtual void _initialize();

    // Operations

    // Attributes
    virtual ::type::String getData () const;
    virtual void setData (::type::String _data);

    virtual ::type::String getTarget () const;
    virtual void setTarget (::type::String _target);

    // References

    /* This is the same value as getClassifierId() returns, but as a static
     * value it can be used in template expansions. */
    static const int classifierId = TypePackage::PROCESSINGINSTRUCTION;

    /*PROTECTED REGION ID(ProcessingInstruction) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(ProcessingInstructionImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    ProcessingInstruction_ptr _this()
    {   return std::dynamic_pointer_cast<ProcessingInstruction>(shared_from_this());}

    // Attributes

    ::type::String m_data
    {};

    ::type::String m_target
    {};

    // References

};

}
 // type

#endif // TYPE_PROCESSINGINSTRUCTION_HPP

