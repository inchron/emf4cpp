// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * mapping/EList.hpp
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

#ifndef ECORECPP_MAPPING_ELIST_HPP
#define ECORECPP_MAPPING_ELIST_HPP

#include <functional>
#include <memory>
#include <type_traits>
#include <vector>

#include "../../ecore_forward.hpp"

namespace ecorecpp {
namespace mapping {

/** Feature test macros for EList<T>::sort() and EList<T>::reverse_iterator.
 *
 * @sa https://en.cppreference.com/w/cpp/feature_test.html
 */
#define emf4cpp_elist_sort				20260203L
#define emf4cpp_elist_reverse_iterator	20260205L


template<typename T>
class EList : public std::enable_shared_from_this<EList<T>> {
public:
	using ptr_type = ::ecore::EList_ptr<T>;
	using raw_ptr_type = EList*;
	using ptr_const_type = ::ecore::EList_const_ptr<T>;
	using raw_ptr_const_type = const EList*;
	using ef_ptr = ::ecore::EStructuralFeature_ptr;

	/** Iterator interfaces for an EList<T>.
	 *
	 * The Iterator knows a forward and a reverse direction.
	 *
	 * A forward iterator uses an index between 0 and size()-1, where size()
	 * points to past-the-end.
	 *
	 * The reverse iterator uses an index between size()-1 and 0, where -1
	 * points to past-the-end.
	 */
	template<typename EListPtrType, bool forward = true>
	class EListIterator {
	public:
		using iterator_category = std::bidirectional_iterator_tag;
		using value_type = T;
		using difference_type = ptrdiff_t;
		using pointer = T*;
		using reference = T&;

		EListIterator( EListPtrType el, size_t ind ) : _elist( el ), _ind( ind )
		{
		}

		value_type operator*() const
		{
			return _elist->get( _ind );
		}

		ef_ptr eFeature() const
		{
			return _elist->eFeature( _ind );
		}

		EListIterator& operator--()
		{
			if ( forward )
				--_ind;
			else
				++_ind;
			return *this;
		}

		EListIterator operator--( int )
		{
			EListIterator old( *this );
			--( *this );
			return old;
		}

		EListIterator& operator++()
		{
			if ( forward )
				++_ind;
			else
				--_ind;
			return *this;
		}

		EListIterator operator++( int )
		{
			EListIterator old( *this );
			++( *this );
			return old;
		}

		bool operator==( const EListIterator& rhs ) const
		{
			return ( _elist == rhs._elist && _ind == rhs._ind );
		}

		bool operator!=( const EListIterator& rhs ) const
		{
			return !( *this == rhs );
		}

		/* A valid index is in [0 .. size-1]. As long as the borders have not
		 * been reached, there is a next element.
		 */
		bool hasNext() const
		{
			if ( forward )
			    return ( (int64_t)_ind < (int64_t)_elist->size() - 1 );
			return ( (int64_t)_ind > 0 );
		}

		ptr_type getEList() const
		{
			return _elist->shared_from_this();
		}

		size_t getIndex() const
		{
			return _ind;
		}

	private:
		EListPtrType _elist;
		size_t _ind;
	};

	typedef EListIterator<raw_ptr_type, true> iterator;
	typedef EListIterator<raw_ptr_const_type, true> const_iterator;
	typedef EListIterator<raw_ptr_type, false> reverse_iterator;
	typedef EListIterator<raw_ptr_const_type, false> const_reverse_iterator;
	// End of iterator interface


	T operator[]( size_t _index ) const
	{
		return get( _index );
	}

	template<typename Q>
	void insert_all( EList<Q>& _q, const ef_ptr& _ef = nullptr )
	{
		ptr_type _p( _q.template asEListOf<T>() );
		const auto pSize = _p->size();
		for ( size_t i = 0; i < pSize; i++ )
			push_back( _p->get( i ), _ef );
	}

	void insert_all( EList const& _q, const ef_ptr& _ef = nullptr )
	{
		const auto qSize = _q.size();
		for ( size_t i = 0; i < qSize; i++ )
			push_back( _q.get( i ), _ef );
	}

	virtual void insert_at( size_t _pos, T _obj, const ef_ptr& = nullptr ) = 0;

	virtual T get( size_t _index ) const = 0;

	virtual T front() const = 0;

	virtual T back() const = 0;

	virtual ef_ptr eFeature( size_t _index ) const = 0;

	virtual bool contains( T _obj, const ef_ptr& = nullptr ) const = 0;

	virtual void push_back( T _obj, const ef_ptr& = nullptr ) = 0;

	/* Do not check, if '_obj' is already part of the list (only relevant for
	 * containment relations). */
	virtual void push_back_unsafe( T _obj, const ef_ptr& = nullptr ) = 0;

	virtual size_t size() const = 0;

	virtual bool empty() const = 0;

	virtual void clear() = 0;

	iterator begin()
	{
		return iterator( this, 0 );
	}

	iterator end()
	{
		return iterator( this, size() );
	}

	const_iterator begin() const
	{
		return const_iterator( this, 0 );
	}

	const_iterator end() const
	{
		return const_iterator( this, size() );
	}

	const_iterator cbegin() const
	{
		return begin();
	}

	const_iterator cend() const
	{
		return end();
	}

	reverse_iterator rbegin()
	{
		return reverse_iterator( this, size() - 1 );
	}

	reverse_iterator rend()
	{
		return reverse_iterator( this, -1 );
	}

	const_reverse_iterator rbegin() const
	{
		return const_reverse_iterator( this, size() - 1 );
	}

	const_reverse_iterator rend() const
	{
		return const_reverse_iterator( this, -1 );
	}

	const_reverse_iterator crbegin() const
	{
		return rbegin();
	}

	const_reverse_iterator crend() const
	{
		return rend();
	}

	virtual void remove( T ) = 0;
	virtual void remove( iterator ) = 0;

	/**
	 * This method normally does nothing. Only for non-containment
	 * reference lists this method removes all orphaned references.
	 */
	virtual void cleanup()
	{
	}

	using Compare = std::function<bool( const T& lhs, const T& rhs )>;
	/**
	 * Sort the list. The Compare function is passed on to std::stable_sort().
	 *
	 * The Java counterpart List<E>.sort(Comparator<? super E> c)
	 * implements a stable sort, hence this method does this, too.
	 */
	virtual void sort( Compare ) = 0;

	/**
     * Allows treating an EList<T> as an EList<Q> (if T can be casted to Q dynamically)
     */
	template<typename Q>
	typename EList<Q>::ptr_type asEListOf()
	{
		return std::make_shared<DelegateEList<Q, T>>( *this );
	}

	virtual ~EList() = default;

protected:
	EList() = default;
};

/**
 * Ofrece la interfaz de una lista EList<T> para una EList<Q>
 * TODO: throw exception
 */
template<typename T, typename Q>
class DelegateEList : public EList<T> {
public:
	typedef EList<Q> list_t;

	DelegateEList( list_t& _delegate ) : m_delegate( _delegate )
	{
	}

	T get( size_t _index ) const override
	{
		return _cast<Q, T>::do_cast( m_delegate[_index] );
	}

	T front() const override
	{
		return _cast<Q, T>::do_cast( m_delegate.front() );
	}

	T back() const override
	{
		return _cast<Q, T>::do_cast( m_delegate.back() );
	}

	typename EList<T>::ef_ptr eFeature( size_t ) const override
	{
		return nullptr;
	}

	void insert_at( size_t _pos, T _obj, const typename EList<T>::ef_ptr& ef = nullptr ) override
	{
		m_delegate.insert_at( _pos, _cast<T, Q>::do_cast( _obj ), ef );
	}

	bool contains( T _obj, const typename EList<T>::ef_ptr& ef = nullptr ) const override
	{
		return m_delegate.contains( _cast<T, Q>::do_cast( _obj ), ef );
	}

	void push_back( T _obj, const typename EList<T>::ef_ptr& ef = nullptr ) override
	{
		m_delegate.push_back( _cast<T, Q>::do_cast( _obj ), ef );
	}

	void push_back_unsafe( T _obj, const typename EList<T>::ef_ptr& ef = nullptr ) override
	{
		m_delegate.push_back_unsafe( _cast<T, Q>::do_cast( _obj ), ef );
	}

	size_t size() const override
	{
		return m_delegate.size();
	}

	bool empty() const override
	{
		return m_delegate.empty();
	}

	void clear() override
	{
		m_delegate.clear();
	}

	void remove( T obj ) override
	{
		m_delegate.remove( _cast<T, Q>::do_cast( obj ) );
	}

	void remove( typename EList<T>::iterator it ) override
	{
		if ( it != EList<T>::end() )
			remove( *it );
	}

	void cleanup() override
	{
		m_delegate.cleanup();
	}

	void sort( typename EList<T>::Compare ) override
	{
		throw std::logic_error( "DelegateEList does not support sorting" );
	}

protected:
	list_t& m_delegate;

	template<typename A, typename B>
	struct _cast {
		static B do_cast( A a )
		{
			return std::dynamic_pointer_cast<typename B::element_type>( a );
		}
	};

	template<typename A>
	struct _cast<A, A> {
		static A do_cast( A a )
		{
			return a;
		}
	};
};


}  // namespace mapping
}  // namespace ecorecpp

#endif	// ECORECPP_MAPPING_ELIST_HPP
