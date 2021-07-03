/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:07:45 by sglass            #+#    #+#             */
/*   Updated: 2021/05/05 18:01:36 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span( unsigned int n )
{
	if (n == 0)
		throw std::out_of_range("cannot be zero");
	_n = n;
	return ;
}

span::span( void )
{
	_n = 0;
	return ;
}

span::~span( void )
{
	return ;
}

span::span( span const &src )
{
	
	*this = src;
	return ;
}

span& span::operator=( span const & rhs)
{
	if ( this != &rhs )
	{
		_n = rhs._n;
		_arr = rhs._arr;
			
	}
	return *this;
}

void span::addNumber(unsigned int num)
{
	if (_n ==  _arr.size())
		throw std::out_of_range("array is full");
	_arr.push_back(num);	
}

int	span::longestSpan( void )
{
	int res;
	std::vector<int>::iterator it;
	std::vector<int>::iterator it2;

	if (_arr.size() < 2)
		throw std::exception();
	it = std::min_element(_arr.begin(), _arr.end());
	it2 = max_element(_arr.begin(), _arr.end());
	res = *it2 - *it;
	return (res);
}

int		span::shortestSpan( void )
{
	std::vector<int>::iterator it2;

	if (_arr.size() < 2)
		throw std::exception();
	std::sort(_arr.begin(), _arr.end());
	it2 = _arr.begin() + 1;
	
	return (*it2 - *(_arr.begin()));
}
