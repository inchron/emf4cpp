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

#include <memory>
#include <type_traits>
#include <vector>

#include "../../ecore_forward.hpp"

namespace ecorecpp {
namespace mapping {

template<typename T>
class EList : public std::enable_shared_from_this<EList<T>> {
public:
	using ptr_type = ::ecore::EList_ptr<T>;
	using ptr_const_type = ::ecore::EList_const_ptr<T>;
	using ef_ptr = ::ecore::EStructuralFeature_ptr;

	/** Iterator interfaces for an EList<T>.
	 */
	template<typename EListPtrType>
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
			--_ind;
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
			++_ind;
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

		bool hasNext() const
		{
			return ( (int64_t)_ind < (int64_t)_elist->size() - 1 );
		}

		const typename EList<T>::ptr_type& getEList() const
		{
			return _elist;
		}

		size_t getIndex() const
		{
			return _ind;
		}

	private:
		EListPtrType _elist;
		size_t _ind;
	};

	typedef EListIterator<ptr_type> iterator;
	typedef EListIterator<ptr_const_type> const_iterator;
	// End of iterator interface


	inline T operator[]( size_t _index ) const
	{
		return get( _index );
	}

	template<typename Q>
	inline void insert_all( EList<Q>& _q, const ef_ptr& _ef = nullptr )
	{
		ptr_type _p( _q.template asEListOf<T>() );

		for ( size_t i = 0; i < _p->size(); i++ )
			push_back( _p->get( i ), _ef );
	}

	inline void insert_all( EList const& _q, const ef_ptr& _ef = nullptr )
	{
		for ( size_t i = 0; i < _q.size(); i++ )
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
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return iterator( this_shared, 0 );
	}

	iterator end()
	{
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return iterator( this_shared, size() );
	}

	const_iterator begin() const
	{
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return const_iterator( this_shared, 0 );
	}

	const_iterator end() const
	{
		auto this_shared = std::enable_shared_from_this<EList<T>>::shared_from_this();
		return const_iterator( this_shared, size() );
	}

	const_iterator cbegin() const
	{
		return begin();
	}

	const_iterator cend() const
	{
		return end();
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

	/**
     * Allows treating an EList<T> as an EList<Q> (if T can be casted to Q dynamically)
     */
	template<typename Q>
	inline typename EList<Q>::ptr_type asEListOf()
	{
		return std::make_shared<DelegateEList<Q, T>>( *this );
	}

	virtual ~EList()
	{
	}

protected:
	EList()
	{
	}
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

	virtual ~DelegateEList()
	{
	}

protected:
	list_t& m_delegate;

	template<typename A, typename B>
	struct _cast {
		static inline B do_cast( A a )
		{
			return std::dynamic_pointer_cast<typename B::element_type>( a );
		}
	};

	template<typename A>
	struct _cast<A, A> {
		static inline A do_cast( A a )
		{
			return a;
		}
	};
};


}  // namespace mapping
}  // namespace ecorecpp

#endif	// ECORECPP_MAPPING_ELIST_HPP
