// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * Copier/Copier.hpp
 * Copyright (C) INCHRON GmbH 2018 <stefan.quandt@inchron.com>
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

#ifndef Copier_HPP
#define Copier_HPP

#include <map>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping/EList.hpp>

namespace ecorecpp::util {

class EXPORT_ECORECPP_DLL Copier {
public:
	explicit Copier( bool keepExternalReferences = true );
	virtual ~Copier();

	/** Create a deep copy of the given EObject. */
	virtual ::ecore::EObject_ptr clone( ::ecore::EObject_ptr );

	/** Create a deep copy of all given EObjects. */
	virtual std::shared_ptr<::ecorecpp::mapping::EList< ::ecore::EObject_ptr > >
		clone(const ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >&);

	virtual ::ecore::EObject_ptr copy( ::ecore::EObject_ptr );
	virtual void copy_references( ::ecore::EObject_ptr src, ::ecore::EObject_ptr dst );

	/** Return a copied object for a source object. If the source object was
	 * not copied, e.g. because it is not in a containment relation to the
	 * copied tree's root, a nullptr is returned. */
	virtual ::ecore::EObject_ptr get_clone( ::ecore::EObject_ptr );

	/** Control if attributes marked as ID are copied 1:1 or if they are
	 * skipped. When they are skipped, an outer mechanism usually will
	 * recreate new unique values for them. */
	Copier& setExactCopy(bool b) { m_exactCopy = b; return *this; }
	[[nodiscard]] bool isExactCopy() const { return m_exactCopy; }

protected:
	bool m_keepExternalRefs {true};
	bool m_exactCopy {false};
	std::map<::ecore::EObject_ptr, ::ecore::EObject_ptr> m_objectsMap;

	virtual void keepReference(::ecore::EObject_ptr dst,
							   ::ecore::EReference_ptr,
							   ::ecore::EObject_ptr refObj);
	virtual void dropReference(::ecore::EObject_ptr dst,
							   ::ecore::EReference_ptr,
							   ::ecore::EObject_ptr refObj);
};

} // util
// ecorecpp

#endif  /* Copier_HPP */
