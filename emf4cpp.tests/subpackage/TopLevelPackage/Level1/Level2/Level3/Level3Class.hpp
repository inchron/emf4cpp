// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TopLevelPackage/Level1/Level2/Level3/Level3Class.hpp
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

#ifndef TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3_LEVEL3CLASS_HPP
#define TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3_LEVEL3CLASS_HPP

#include <TopLevelPackage/dllTopLevelPackage.hpp>
#include <TopLevelPackage/Level1/Level2/Level3_forward.hpp>

#include <ecore_forward.hpp>
#include <TopLevelPackage/Level1/Level2/Level2Class.hpp>

#include "Level3Package.hpp"

/*PROTECTED REGION ID(Level3Class_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace TopLevelPackage
{
    namespace Level1
    {
        namespace Level2
        {
            namespace Level3
            {

            class EXPORT_TOPLEVELPACKAGE_DLL Level3Class : public virtual ::TopLevelPackage::Level1::Level2::Level2Class
            {
            public:
                Level3Class();

                virtual ~Level3Class();

                virtual void _initialize();

                // Operations

                // Attributes

                // References

                /* This is the same value as getClassifierId() returns, but as a static
                 * value it can be used in template expansions. */
                static const int classifierId = Level3Package::LEVEL3CLASS;

                /*PROTECTED REGION ID(Level3Class) START*/
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

                /*PROTECTED REGION ID(Level3ClassImpl) START*/
                // Please, enable the protected region if you add manually written code.
                // To do this, add the keyword ENABLED before START.
                /*PROTECTED REGION END*/

            protected:
                Level3Class_ptr _this()
                {   return std::dynamic_pointer_cast<Level3Class>(shared_from_this());}

                // Attributes

                // References

            };

        }
    // Level3
    }// Level2
} // Level1
} // TopLevelPackage

#endif // TOPLEVELPACKAGE_LEVEL1_LEVEL2_LEVEL3_LEVEL3CLASS_HPP

