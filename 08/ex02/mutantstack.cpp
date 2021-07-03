/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:58:09 by sglass            #+#    #+#             */
/*   Updated: 2021/05/05 17:30:53 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

template <typename T1>
mutantstack<T1>::mutantstack() : std::stack<T1>()
{
	_begin = 0;
	_end = 0;
}

template <typename T1>
mutantstack<T1>::~mutantstack( void )
{
	
}

template <typename T1>
mutantstack<T1>::mutantstack( mutantstack const &src ) : std::stack<T1>(src)
{
	_begin = src._begin;
	_end = src._end;
}


template <typename T1>
mutantstack<T1> &mutantstack<T1>::operator = ( mutantstack<T1> const &rhs )
{
	if (this == &rhs)
		return (*this);
	std::stack<T1>::operator=(rhs);
	_begin = rhs._begin;
	_end = rhs._end;
	return (*this);
}

template <typename T1>
void	mutantstack<T1>::push(const T1 &obj)
{
	std::stack<T1>::push(obj);
	if (_begin == 0)
		_begin = &std::stack<T1>::top();
	_end = &std::stack<T1>::top();
}

template <typename T1>
T1* mutantstack<T1>::begin()
{
	return (_begin);
}
template <typename T1>
T1*	mutantstack<T1>::end()
{
	return (_end + 1);
}






template <typename T1>
mutantstack<T1>::iterator::iterator (void )
{
	pointer = 0;
}
template <typename T1>
mutantstack<T1>::iterator::iterator (T1 * p)
{
	pointer = p;
}
template <typename T1>
mutantstack<T1>::iterator::~iterator( void )
{
	
}
template <typename T1>
typename mutantstack<T1>::iterator&   mutantstack<T1>::iterator::operator=( iterator const &rhs )
{
	if (this == &rhs)
		return (*this);
	pointer = rhs.pointer;
	return (*this);

}
template <typename T1>
mutantstack<T1>::iterator::iterator( iterator const &src )
{
	*this = src;
}


template <typename T1>
T1& mutantstack<T1>::iterator::operator *()
{
	return (*pointer);
}

template <typename T1>
typename mutantstack<T1>::iterator&	mutantstack<T1>::iterator::operator++()
{
	pointer++;
	return (*this);
}

template <typename T1>
typename mutantstack<T1>::iterator&	mutantstack<T1>::iterator::operator--()
{
	pointer--;
	return (*this);
}

template <typename T1>
bool			mutantstack<T1>::iterator::operator==( const iterator &p2)
{
	return (this->pointer == p2.pointer);
}

template <typename T1>
bool			mutantstack<T1>::iterator::operator!=( const iterator &p2)
{
	return (this->pointer != p2.pointer);
}