// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/declaration/DeclarationItemDispatcher.hpp
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

#ifndef XPAND3_DECLARATION_ITEMDISPATCHER_HPP
#define XPAND3_DECLARATION_ITEMDISPATCHER_HPP
#include <cassert>

#include <ecore_forward.hpp>
#include <ecore/EClass.hpp>

#include <xpand3/declaration.hpp>
#include <xpand3/dllXpand3.hpp>

namespace xpand3
{
    namespace declaration
    {

        template<class T>
        class EXPORT_XPAND3_DLL
    DeclarationItemDispatcher
    {
    public:
        DeclarationItemDispatcher() = default;
        ~DeclarationItemDispatcher() = default;

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
            if (eClass->getEPackage() != DeclarationPackage::_instance())
            {
                assert(!"The package of the eclass does not match the package of the dispatcher!");
                return;
            }

            switch (eClass->getClassifierID())
            {
                case DeclarationPackage::ABSTRACTASPECT:
                {
                    auto derived = ::ecore::as< AbstractAspect >(obj);
                    _this()->T::work(derived, (AbstractAspect*)nullptr);
                }break;
                case DeclarationPackage::ABSTRACTDECLARATION:
                {
                    auto derived = ::ecore::as< AbstractDeclaration >(obj);
                    _this()->T::work(derived, (AbstractDeclaration*)nullptr);
                }break;
                case DeclarationPackage::ABSTRACTNAMEDDECLARATION:
                {
                    auto derived = ::ecore::as< AbstractNamedDeclaration >(obj);
                    _this()->T::work(derived, (AbstractNamedDeclaration*)nullptr);
                }break;
                case DeclarationPackage::CHECK:
                {
                    auto derived = ::ecore::as< Check >(obj);
                    _this()->T::work(derived, (Check*)nullptr);
                }break;
                case DeclarationPackage::CREATEEXTENSION:
                {
                    auto derived = ::ecore::as< CreateExtension >(obj);
                    _this()->T::work(derived, (CreateExtension*)nullptr);
                }break;
                case DeclarationPackage::DEFINITION:
                {
                    auto derived = ::ecore::as< Definition >(obj);
                    _this()->T::work(derived, (Definition*)nullptr);
                }break;
                case DeclarationPackage::DEFINITIONASPECT:
                {
                    auto derived = ::ecore::as< DefinitionAspect >(obj);
                    _this()->T::work(derived, (DefinitionAspect*)nullptr);
                }break;
                case DeclarationPackage::EXTENSION:
                {
                    auto derived = ::ecore::as< Extension >(obj);
                    _this()->T::work(derived, (Extension*)nullptr);
                }break;
                case DeclarationPackage::EXTENSIONASPECT:
                {
                    auto derived = ::ecore::as< ExtensionAspect >(obj);
                    _this()->T::work(derived, (ExtensionAspect*)nullptr);
                }break;
                case DeclarationPackage::JAVAEXTENSION:
                {
                    auto derived = ::ecore::as< JavaExtension >(obj);
                    _this()->T::work(derived, (JavaExtension*)nullptr);
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
 // declaration
}// xpand3

#endif // XPAND3_DECLARATION_ITEMDISPATCHER_HPP
