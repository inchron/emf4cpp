// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * TreeIterator.hpp
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#ifndef TreeIterator_HPP
#define TreeIterator_HPP

#include "../dllEcorecpp.hpp"

#include <stack>
#include <type_traits>

#include "../mapping/EList.hpp"

namespace ecorecpp {
namespace util {

/** A feature test macro if TreeIterator<T> can be use in range-base for loops.
 *
 * @sa https://en.cppreference.com/w/cpp/feature_test.html
 */
#define emf4cpp_treeiterator_range_based_for	20260207L

/** A tree iterator implementation for EMF model hierarchies.
 *
 *  The default implementation of getChildren(T*) is supplied for EObject
 *  hierarchies. For other types a matching specialization of this
 *  method must be supplied.
 *  The TreeIterator<EObject_ptr> traverses the EMF instance along
 *  the containment relations.
 *
 *  The iterator to the next element is obtained by applying the
 *  operator++ on the current iterator.
 *
 *  The dereference operator returns a pointer to current EObject
 *  or a nullptr for the past-the-last element.
 *
 *  The begin() and end() methods support the use in range-for loops
 *  (since C++11): for (auto&& elem : object->eAllContents) ...
 *
 *  Their free function versions are provided as well for argument
 *  dependent lookup.
 */

template <class T>
class EXPORT_ECORECPP_DLL TreeIterator {
public:
	using iterator_category = std::forward_iterator_tag;
    using value_type = T;
    using difference_type = ptrdiff_t;
    using pointer = T*;
    using reference = T&;

	using EEList = ::ecorecpp::mapping::EList<T>;

	explicit TreeIterator(T obj) {
		_current = obj;
	}

	explicit TreeIterator(const typename EEList::ptr_type& elist) {
		_stack.push(std::make_pair(elist, elist->begin()));
		_current = *elist->begin();
	}

	auto begin() const { return *this;}

	auto end() const { return TreeIterator(value_type()); }

	TreeIterator& operator++() {
		if (!_current)
			return *this;

		auto children = getChildren(_current);
		auto it = children->begin();
		if ( it != children->end() ) {
			_stack.push(std::make_pair(children, it));
			_current = *it;
			return *this;
		}

		if ( _stack.empty() ) {
			_current = nullptr;
			return *this;
		}

		it = _stack.top().second;
		while ( !it.hasNext() ) {
			_stack.pop();
			if ( _stack.empty() ) {
				_current = nullptr;
				return *this;
			}
			it = _stack.top().second;
		}

		it = ++_stack.top().second;
		_current = *it;
		return *this;
	}

	TreeIterator operator++(int) {
		TreeIterator retval = *this;
		++(*this);
		return retval;
	}

	bool operator==(const TreeIterator& other) const {
		return _current == other._current;
	}

	bool operator!=(const TreeIterator& other) const {
		return !(*this == other);
	}

	value_type operator*() const {
		return _current;
	}

	size_t level() const {
		return _stack.size();
	}

protected:
	typename EEList::ptr_type getChildren(T obj) {
		return obj->eContents();
	}

private:
	T _current;
	std::stack<std::pair<typename EEList::ptr_type, typename EEList::iterator>> _stack;
};

template <class T>
TreeIterator<T> begin(const TreeIterator<T>& it)
{
	return it.begin();
}

template <class T>
TreeIterator<T> end(const TreeIterator<T>& it)
{
	return it.end();
}

} // utils
} // ecorecpp

#endif    /* TreeIterator_HPP */
