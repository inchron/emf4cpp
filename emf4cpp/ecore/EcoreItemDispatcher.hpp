// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * ecore/EcoreItemDispatcher.hpp
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

#ifndef ECORE_ITEMDISPATCHER_HPP
#define ECORE_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <ecore.hpp>
#include <ecore/dllEcore.hpp>

namespace ecore
{

    template<class T>
    class EXPORT_ECORE_DLL
EcoreItemDispatcher
{
public:
    EcoreItemDispatcher() = default;
    ~EcoreItemDispatcher() = default;

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
        if (eClass->getEPackage() != EcorePackage::_instance())
        {
            assert(!"The package of the eclass does not match the package of the dispatcher!");
            return;
        }

        switch (eClass->getClassifierID())
        {
            case EcorePackage::EANNOTATION:
            {
                auto derived = ::ecore::as< EAnnotation >(obj);
                _this()->T::work(derived, (EAnnotation*)nullptr);
            }break;
            case EcorePackage::EATTRIBUTE:
            {
                auto derived = ::ecore::as< EAttribute >(obj);
                _this()->T::work(derived, (EAttribute*)nullptr);
            }break;
            case EcorePackage::ECLASS:
            {
                auto derived = ::ecore::as< EClass >(obj);
                _this()->T::work(derived, (EClass*)nullptr);
            }break;
            case EcorePackage::ECLASSIFIER:
            {
                auto derived = ::ecore::as< EClassifier >(obj);
                _this()->T::work(derived, (EClassifier*)nullptr);
            }break;
            case EcorePackage::EDATATYPE:
            {
                auto derived = ::ecore::as< EDataType >(obj);
                _this()->T::work(derived, (EDataType*)nullptr);
            }break;
            case EcorePackage::EENUM:
            {
                auto derived = ::ecore::as< EEnum >(obj);
                _this()->T::work(derived, (EEnum*)nullptr);
            }break;
            case EcorePackage::EENUMLITERAL:
            {
                auto derived = ::ecore::as< EEnumLiteral >(obj);
                _this()->T::work(derived, (EEnumLiteral*)nullptr);
            }break;
            case EcorePackage::EFACTORY:
            {
                auto derived = ::ecore::as< EFactory >(obj);
                _this()->T::work(derived, (EFactory*)nullptr);
            }break;
            case EcorePackage::EGENERICTYPE:
            {
                auto derived = ::ecore::as< EGenericType >(obj);
                _this()->T::work(derived, (EGenericType*)nullptr);
            }break;
            case EcorePackage::EMODELELEMENT:
            {
                auto derived = ::ecore::as< EModelElement >(obj);
                _this()->T::work(derived, (EModelElement*)nullptr);
            }break;
            case EcorePackage::ENAMEDELEMENT:
            {
                auto derived = ::ecore::as< ENamedElement >(obj);
                _this()->T::work(derived, (ENamedElement*)nullptr);
            }break;
            case EcorePackage::EOBJECT:
            {
                auto derived = ::ecore::as< EObject >(obj);
                _this()->T::work(derived, (EObject*)nullptr);
            }break;
            case EcorePackage::EOPERATION:
            {
                auto derived = ::ecore::as< EOperation >(obj);
                _this()->T::work(derived, (EOperation*)nullptr);
            }break;
            case EcorePackage::EPACKAGE:
            {
                auto derived = ::ecore::as< EPackage >(obj);
                _this()->T::work(derived, (EPackage*)nullptr);
            }break;
            case EcorePackage::EPARAMETER:
            {
                auto derived = ::ecore::as< EParameter >(obj);
                _this()->T::work(derived, (EParameter*)nullptr);
            }break;
            case EcorePackage::EREFERENCE:
            {
                auto derived = ::ecore::as< EReference >(obj);
                _this()->T::work(derived, (EReference*)nullptr);
            }break;
            case EcorePackage::ESTRINGTOSTRINGMAPENTRY:
            {
                auto derived = ::ecore::as< EStringToStringMapEntry >(obj);
                _this()->T::work(derived, (EStringToStringMapEntry*)nullptr);
            }break;
            case EcorePackage::ESTRUCTURALFEATURE:
            {
                auto derived = ::ecore::as< EStructuralFeature >(obj);
                _this()->T::work(derived, (EStructuralFeature*)nullptr);
            }break;
            case EcorePackage::ETYPEDELEMENT:
            {
                auto derived = ::ecore::as< ETypedElement >(obj);
                _this()->T::work(derived, (ETypedElement*)nullptr);
            }break;
            case EcorePackage::ETYPEPARAMETER:
            {
                auto derived = ::ecore::as< ETypeParameter >(obj);
                _this()->T::work(derived, (ETypeParameter*)nullptr);
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
 // ecore

#endif // ECORE_ITEMDISPATCHER_HPP
