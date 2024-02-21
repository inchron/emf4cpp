// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/EListImpl.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
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

#ifndef ECORECPP_MAPPING_ELISTIMPL_HPP
#define ECORECPP_MAPPING_ELISTIMPL_HPP

#include <algorithm>
#include <cassert>
#include <iostream>

#include <ecore/EObject.hpp>
#include <ecore/EReference.hpp>

#ifdef ECORECPP_NOTIFICATION_API
#	include <ecorecpp/notify.hpp>
#endif

#include "any.hpp"
#include "EList.hpp"
#include "elist_traits.hpp"

namespace ecorecpp {
namespace mapping {

template<typename T>
class EListImpl : public EList<T> {
public:
	T get( size_t _index ) const override
	{
		return m_content[_index];
	}

	T front() const override
	{
		return m_content.front();
	}

	T back() const override
	{
		return m_content.back();
	}

	typename EList<T>::ef_ptr eFeature( size_t ) const override
	{
		return nullptr;
	}

	/* The container grows as std::vector<>::insert() does. */
	void insert_at( size_t _pos, T _obj, const typename EList<T>::ef_ptr& = nullptr ) override
	{
		/* Out-of-range positions are appended. */
		if ( _pos >= m_content.size() )
			return push_back( _obj );

		auto it = m_content.begin() + _pos;
		m_content.insert( it, _obj );
	}

	bool contains( T _obj, const typename EList<T>::ef_ptr& = nullptr ) const override
	{
		return std::any_of( m_content.begin(), m_content.end(),
							[&_obj]( const T& obj ) { return obj == _obj; } );
	}

	void push_back( T _obj, const typename EList<T>::ef_ptr& = nullptr ) override
	{
		m_content.push_back( _obj );
	}

	void push_back_unsafe( T _obj, const typename EList<T>::ef_ptr& = nullptr ) override
	{
		m_content.push_back( _obj );
	}

	size_t size() const override
	{
		return m_content.size();
	}

	bool empty() const override
	{
		return m_content.empty();
	}

	void clear() override
	{
		m_content.clear();
	}

	void remove( T _obj ) override
	{
		auto it = std::find( m_content.begin(), m_content.end(), _obj );
		if ( it != m_content.end() )
			m_content.erase( it );
	}

	/* Better check before trusting the caller. */
	void remove( typename EList<T>::iterator it ) override
	{
		if ( it != EList<T>::end() )
			remove( *it );
	}

	virtual ~EListImpl()
	{
	}

	EListImpl()
	{
	}

protected:
	std::vector<T> m_content;
};

template<typename T, int upper_bound = -1, bool containment = false, bool opposite = false>
class ReferenceEListImpl : public EList<T> {
	static_assert( is_shared_ptr<T>::value,
				   "ReferenceEListImpl content type must be a shared_ptr!" );

	using containment_t = ContainmentPolicy<T, containment>;
	using opposite_t = OppositePolicy<T, opposite>;
	using value_type = T;
	using ptr_type = typename containment_t::ptr_type;

public:
	ReferenceEListImpl( ::ecore::EObject* _this, const ::ecore::EReference_ptr& _ref,
						const ::ecore::EReference_ptr& _opp = ::ecore::EReference_ptr() )
		: m_this( _this ), m_ref( _ref ), m_opp( _opp )
	{
		assert( _this != nullptr
				&& "ReferenceEListImpl must be created with non-null parent pointer!" );
	}

	/* The container grows as std::vector<>::insert() does. */
	void insert_at( size_t _pos, value_type _obj,
					const typename EList<T>::ef_ptr& ef = nullptr ) override
	{
		/* Out-of-range positions are appended. */
		if ( _pos >= m_content.size() )
			return push_back( _obj, ef );

		/* Do not insert a second reference to the same object.
		 * This should be possible for non-containment - non-unique
		 * reference lists but the java eclipse implementation also
		 * does not support it either.
		 * (see: https://bugs.eclipse.org/bugs/show_bug.cgi?id=89325)
		 */
		if ( !contains( _obj ) ) {
			auto it = m_content.begin() + _pos;
			m_content.insert( it, typename containment_t::ptr_type( _obj ) );

			containment_t::set( _obj, _this(), m_ref );
			opposite_t::set( _obj, _this(), m_opp );

#ifdef ECORECPP_NOTIFICATION_API
			if ( _this()->eNotificationRequired() ) {
				::ecorecpp::notify::Notification notification(
					::ecorecpp::notify::Notification::ADD, _this(), m_ref, T(), _obj );
				_this()->eNotify( &notification );
			}
#endif
		}
	}

	value_type get( size_t _index ) const override
	{
		return containment_t::to_value_type( m_content[_index] );
	}

	value_type front() const override
	{
		return containment_t::to_value_type( m_content.front() );
	}

	value_type back() const override
	{
		return containment_t::to_value_type( m_content.back() );
	}

	typename EList<T>::ef_ptr eFeature( size_t ) const override
	{
		return nullptr;
	}

	bool contains( T _obj, const typename EList<T>::ef_ptr& = nullptr ) const override
	{
		return std::any_of( m_content.begin(), m_content.end(), [&_obj]( const ptr_type& ptr ) {
			return containment_t::to_value_type( ptr ) == _obj;
		} );
	}

	void push_back( value_type _obj, const typename EList<T>::ef_ptr& = nullptr ) override
	{
		if ( !contains( _obj ) )
			push_back_unsafe( _obj );
	}

	void push_back_unsafe( value_type _obj, const typename EList<T>::ef_ptr& = nullptr ) override
	{
		m_content.push_back( typename containment_t::ptr_type( _obj ) );

		containment_t::set( _obj, _this(), m_ref );
		opposite_t::set( _obj, _this(), m_opp );

#ifdef ECORECPP_NOTIFICATION_API
		if ( _this()->eNotificationRequired() ) {
			::ecorecpp::notify::Notification notification( ::ecorecpp::notify::Notification::ADD,
														   _this(), m_ref, T(), _obj );
			_this()->eNotify( &notification );
		}
#endif
	}

	size_t size() const override
	{
		return m_content.size();
	}

	bool empty() const override
	{
		return m_content.empty();
	}

	void clear() override
	{
		containment_t::free_all( m_content );

		m_content.clear();

#ifdef ECORECPP_NOTIFICATION_API
		if ( _this()->eNotificationRequired() ) {
			::ecorecpp::notify::Notification notification(
				::ecorecpp::notify::Notification::REMOVE_MANY, _this(), m_ref, T(), T() );
			_this()->eNotify( &notification );
		}
#endif
	}

	void remove( value_type _obj ) override
	{
		basicRemove( _obj );

		containment_t::unset( _obj, m_ref );
		opposite_t::unset( _obj, _this(), m_opp );
	}

	/* Better check before trusting the caller. */
	void remove( typename EList<T>::iterator it ) override
	{
		if ( it != EList<T>::end() ) {
			remove( *it );
		}
	}

	/* Called from the opposite end of a relation: Just remove the object, do
	 * nothing else. */
	void basicRemove( value_type _obj )
	{
		auto it = std::find_if( m_content.begin(), m_content.end(), [&_obj]( const ptr_type& ptr ) {
			return containment_t::to_value_type( ptr ) == _obj;
		} );
		if ( it != m_content.end() ) {
			m_content.erase( it );

#ifdef ECORECPP_NOTIFICATION_API
			if ( _this()->eNotificationRequired() ) {
				::ecorecpp::notify::Notification notification(
					::ecorecpp::notify::Notification::REMOVE, _this(), m_ref, _obj, T() );
				_this()->eNotify( &notification );
			}
#endif
		}
	}

	/* Called from the opposite end of a relation: Just add the object, do
	 * nothing else. */
	void basicAdd( value_type _obj )
	{
		auto it = std::find_if( m_content.begin(), m_content.end(), [&_obj]( const ptr_type& ptr ) {
			return containment_t::to_value_type( ptr ) == _obj;
		} );
		if ( it == m_content.end() ) {
			m_content.push_back( typename containment_t::ptr_type( _obj ) );

#ifdef ECORECPP_NOTIFICATION_API
			if ( _this()->eNotificationRequired() ) {
				::ecorecpp::notify::Notification notification(
					::ecorecpp::notify::Notification::ADD, _this(), m_ref, T(), _obj );
				_this()->eNotify( &notification );
			}
#endif
		}
	}

	void cleanup() override
	{
		containment_t::cleanup( m_content );
	}

	virtual ~ReferenceEListImpl()
	{
		containment_t::free_all( m_content );
	}

protected:
	::ecore::EObject_ptr _this()
	{
		return m_this->shared_from_this();
	}
	::ecore::EObject* m_this;  // owner object
	::ecore::EReference_ptr m_ref;
	::ecore::EReference_ptr m_opp;

	typename containment_t::container_type m_content;
};

template<class T>
using ContainingEList = EListImpl<T>;

}  // namespace mapping
}  // namespace ecorecpp

#endif	// ECORECPP_MAPPING_ELISTIMPL_HPP
