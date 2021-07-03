/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:36:08 by sglass            #+#    #+#             */
/*   Updated: 2021/04/14 13:03:03 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fpoint( 0 )
{
	std::cout << "Default constructor called" <<std::endl;

	return ;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" <<std::endl;

	return ;
}

Fixed::Fixed ( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}

Fixed &		Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_fpoint = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	
	return (this->_fpoint);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "getRawBits member function called" << std::endl;

	this->_fpoint = raw;
}

