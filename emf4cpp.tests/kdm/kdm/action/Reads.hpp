// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/action/Reads.hpp
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

#ifndef KDM_ACTION_READS_HPP
#define KDM_ACTION_READS_HPP

#include <kdm/action_forward.hpp>

#include <kdm/kdm_forward.hpp>
#include <kdm/code_forward.hpp>
#include <kdm/action/AbstractActionRelationship.hpp>

#include "ActionPackage.hpp"

#include "../dllKdm.hpp"

/*PROTECTED REGION ID(Reads_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace kdm
{
    namespace action
    {

    class EXPORT_KDM_DLL Reads : public virtual ::kdm::action::AbstractActionRelationship
    {
    public:
        Reads();

        ~Reads() override;

        void _initialize() override;

        // Operations

        // Attributes

        // References
        virtual ::kdm::code::DataElement_ptr getTo () const;
        virtual void setTo (::kdm::code::DataElement_ptr _to);

        virtual ::kdm::action::ActionElement_ptr getFrom () const;
        virtual void setFrom (::kdm::action::ActionElement_ptr _from);

        /* This is the same value as getClassifierId() returns, but as a static
         * value it can be used in template expansions. */
        static const int classifierId = ActionPackage::READS;

        /*PROTECTED REGION ID(Reads) START*/
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

        /*PROTECTED REGION ID(ReadsImpl) START*/
        // Please, enable the protected region if you add manually written code.
        // To do this, add the keyword ENABLED before START.
        /*PROTECTED REGION END*/

    protected:
        Reads_ptr _this()
        {   return std::dynamic_pointer_cast<Reads>(shared_from_this());}

        // Attributes

        // References

        std::weak_ptr< ::kdm::code::DataElement > m_to;

        std::weak_ptr< ::kdm::action::ActionElement > m_from;

    };

}
 // action
}// kdm

#endif // KDM_ACTION_READS_HPP

