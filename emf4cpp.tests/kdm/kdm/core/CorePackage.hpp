// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/core/CorePackage.hpp
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

#ifndef _KDM_COREPACKAGE_HPP
#define _KDM_COREPACKAGE_HPP

#include <ecore/EPackage.hpp>
#include <kdm/core_forward.hpp>
#include <ecorecpp/PackageDeleter.hpp>

#include "../dllKdm.hpp"

namespace kdm
{
    namespace core
    {

    class EXPORT_KDM_DLL CorePackage : public virtual ::ecore::EPackage
    {
    public:

        static CorePackage_ptr _instance();
        static CorePackage_ptr _getInstanceAndRemoveOwnership();

        // IDs for classifier AggregatedRelationship
        static const int AGGREGATEDRELATIONSHIP = 0;
        static const int AGGREGATEDRELATIONSHIP__ATTRIBUTE = 0;
        static const int AGGREGATEDRELATIONSHIP__ANNOTATION = 1;
        static const int AGGREGATEDRELATIONSHIP__STEREOTYPE = 2;
        static const int AGGREGATEDRELATIONSHIP__TAGGEDVALUE = 3;
        static const int AGGREGATEDRELATIONSHIP__FROM = 4;
        static const int AGGREGATEDRELATIONSHIP__TO = 5;
        static const int AGGREGATEDRELATIONSHIP__RELATION = 6;
        static const int AGGREGATEDRELATIONSHIP__DENSITY = 7;
        static const int AGGREGATEDRELATIONSHIP_FEATURE_COUNT = 8;

        // IDs for classifier Boolean
        static const int BOOLEAN = 1;

        // IDs for classifier Element
        static const int ELEMENT = 2;
        static const int ELEMENT__ATTRIBUTE = 0;
        static const int ELEMENT__ANNOTATION = 1;
        static const int ELEMENT_FEATURE_COUNT = 2;

        // IDs for classifier Integer
        static const int INTEGER = 3;

        // IDs for classifier KDMEntity
        static const int KDMENTITY = 4;
        static const int KDMENTITY__ATTRIBUTE = 0;
        static const int KDMENTITY__ANNOTATION = 1;
        static const int KDMENTITY__STEREOTYPE = 2;
        static const int KDMENTITY__TAGGEDVALUE = 3;
        static const int KDMENTITY__NAME = 4;
        static const int KDMENTITY_FEATURE_COUNT = 5;

        // IDs for classifier KDMRelationship
        static const int KDMRELATIONSHIP = 5;
        static const int KDMRELATIONSHIP__ATTRIBUTE = 0;
        static const int KDMRELATIONSHIP__ANNOTATION = 1;
        static const int KDMRELATIONSHIP__STEREOTYPE = 2;
        static const int KDMRELATIONSHIP__TAGGEDVALUE = 3;
        static const int KDMRELATIONSHIP_FEATURE_COUNT = 4;

        // IDs for classifier ModelElement
        static const int MODELELEMENT = 6;
        static const int MODELELEMENT__ATTRIBUTE = 0;
        static const int MODELELEMENT__ANNOTATION = 1;
        static const int MODELELEMENT__STEREOTYPE = 2;
        static const int MODELELEMENT__TAGGEDVALUE = 3;
        static const int MODELELEMENT_FEATURE_COUNT = 4;

        // IDs for classifier String
        static const int STRING = 7;

        // EClassifiers methods

        virtual ::ecore::EClass_ptr getElement();

        virtual ::ecore::EClass_ptr getModelElement();

        virtual ::ecore::EClass_ptr getKDMEntity();

        virtual ::ecore::EClass_ptr getKDMRelationship();

        virtual ::ecore::EClass_ptr getAggregatedRelationship();

        virtual ::ecore::EDataType_ptr getString();

        virtual ::ecore::EDataType_ptr getInteger();

        virtual ::ecore::EDataType_ptr getBoolean();

        // EStructuralFeatures methods

        virtual ::ecore::EReference_ptr getElement__attribute();

        virtual ::ecore::EReference_ptr getElement__annotation();

        virtual ::ecore::EReference_ptr getModelElement__stereotype();

        virtual ::ecore::EReference_ptr getModelElement__taggedValue();

        virtual ::ecore::EAttribute_ptr getKDMEntity__name();

        virtual ::ecore::EReference_ptr getAggregatedRelationship__from();

        virtual ::ecore::EReference_ptr getAggregatedRelationship__to();

        virtual ::ecore::EReference_ptr getAggregatedRelationship__relation();

        virtual ::ecore::EAttribute_ptr getAggregatedRelationship__density();

    protected:

        static ::ecore::Ptr< CorePackage > s_instance;

        CorePackage();
        void _initPackage();

        ::ecore::EClass_ptr m_AggregatedRelationshipEClass;
        ::ecore::EDataType_ptr m_BooleanEDataType;
        ::ecore::EClass_ptr m_ElementEClass;
        ::ecore::EDataType_ptr m_IntegerEDataType;
        ::ecore::EClass_ptr m_KDMEntityEClass;
        ::ecore::EClass_ptr m_KDMRelationshipEClass;
        ::ecore::EClass_ptr m_ModelElementEClass;
        ::ecore::EDataType_ptr m_StringEDataType;

        // EStructuralFeatures instances

        ::ecore::EReference_ptr m_Element__attribute;

        ::ecore::EReference_ptr m_Element__annotation;

        ::ecore::EReference_ptr m_ModelElement__stereotype;

        ::ecore::EReference_ptr m_ModelElement__taggedValue;

        ::ecore::EAttribute_ptr m_KDMEntity__name;

        ::ecore::EReference_ptr m_AggregatedRelationship__from;

        ::ecore::EReference_ptr m_AggregatedRelationship__to;

        ::ecore::EReference_ptr m_AggregatedRelationship__relation;

        ::ecore::EAttribute_ptr m_AggregatedRelationship__density;

    };

}
 // core
}// kdm

#endif // _KDM_COREPACKAGE_HPP

