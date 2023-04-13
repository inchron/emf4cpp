// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * kdm/conceptual/ConceptualItemDispatcher.hpp
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

#ifndef KDM_CONCEPTUAL_ITEMDISPATCHER_HPP
#define KDM_CONCEPTUAL_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <kdm/conceptual.hpp>
#include <kdm/dllKdm.hpp>

namespace kdm
{
    namespace conceptual
    {

        template<class T>
        class EXPORT_KDM_DLL
    ConceptualItemDispatcher
    {
    public:
        ConceptualItemDispatcher() = default;
        ~ConceptualItemDispatcher() = default;

        /** Clients need to overload and reimplement this work() method for every
         * class they want to handle. The second argument is a dummy argument to
         * disambiguate work methods in case of an inheritance hirarchy and
         * always contains a nullptr.
         * Note that in a class hierarchy classes may be shadowed by derived classes. */
        void work(const ::ecore::EObject_ptr&, ::ecore::EObject*)
        {}

        /** Entry function for the dispatch mechanism. */
        void enter(const ::ecore::EObject_ptr& obj)
        {
            auto eClass = obj->eClass();
            if (eClass->getEPackage() != ConceptualPackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case ConceptualPackage::ABSTRACTCONCEPTUALELEMENT:
                {
                    auto derived = ::ecore::as< AbstractConceptualElement >(obj);
                    _this()->T::work(derived, (AbstractConceptualElement*)nullptr);
                }break;
                case ConceptualPackage::ABSTRACTCONCEPTUALRELATIONSHIP:
                {
                    auto derived = ::ecore::as< AbstractConceptualRelationship >(obj);
                    _this()->T::work(derived, (AbstractConceptualRelationship*)nullptr);
                }break;
                case ConceptualPackage::BEHAVIORUNIT:
                {
                    auto derived = ::ecore::as< BehaviorUnit >(obj);
                    _this()->T::work(derived, (BehaviorUnit*)nullptr);
                }break;
                case ConceptualPackage::CONCEPTUALCONTAINER:
                {
                    auto derived = ::ecore::as< ConceptualContainer >(obj);
                    _this()->T::work(derived, (ConceptualContainer*)nullptr);
                }break;
                case ConceptualPackage::CONCEPTUALELEMENT:
                {
                    auto derived = ::ecore::as< ConceptualElement >(obj);
                    _this()->T::work(derived, (ConceptualElement*)nullptr);
                }break;
                case ConceptualPackage::CONCEPTUALFLOW:
                {
                    auto derived = ::ecore::as< ConceptualFlow >(obj);
                    _this()->T::work(derived, (ConceptualFlow*)nullptr);
                }break;
                case ConceptualPackage::CONCEPTUALMODEL:
                {
                    auto derived = ::ecore::as< ConceptualModel >(obj);
                    _this()->T::work(derived, (ConceptualModel*)nullptr);
                }break;
                case ConceptualPackage::CONCEPTUALRELATIONSHIP:
                {
                    auto derived = ::ecore::as< ConceptualRelationship >(obj);
                    _this()->T::work(derived, (ConceptualRelationship*)nullptr);
                }break;
                case ConceptualPackage::CONCEPTUALROLE:
                {
                    auto derived = ::ecore::as< ConceptualRole >(obj);
                    _this()->T::work(derived, (ConceptualRole*)nullptr);
                }break;
                case ConceptualPackage::FACTUNIT:
                {
                    auto derived = ::ecore::as< FactUnit >(obj);
                    _this()->T::work(derived, (FactUnit*)nullptr);
                }break;
                case ConceptualPackage::RULEUNIT:
                {
                    auto derived = ::ecore::as< RuleUnit >(obj);
                    _this()->T::work(derived, (RuleUnit*)nullptr);
                }break;
                case ConceptualPackage::SCENARIOUNIT:
                {
                    auto derived = ::ecore::as< ScenarioUnit >(obj);
                    _this()->T::work(derived, (ScenarioUnit*)nullptr);
                }break;
                case ConceptualPackage::TERMUNIT:
                {
                    auto derived = ::ecore::as< TermUnit >(obj);
                    _this()->T::work(derived, (TermUnit*)nullptr);
                }break;
                default:
                break;
            }
        }

    private:
        /** Inline helper, should compile to simple offset adjustment. */
        T* _this()
        {   return static_cast<T*>(this);}

        /** Inline helper, should compile to simple offset adjustment. */
        const T* _this() const
        {   return static_cast<const T*>(this);}
    };

}
 // conceptual
}// kdm

#endif // KDM_CONCEPTUAL_ITEMDISPATCHER_HPP
