/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:36:08 by sglass            #+#    #+#             */
/*   Updated: 2021/04/15 13:09:23 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fpoint( 0 )
{
	std::cout << "Default constructor called" <<std::endl;

	return ;
}

Fixed::Fixed( const float fp)
{
	std::cout << "Float constructor called" <<std::endl;
	this->_fpoint = (roundf(fp * (1 << this->_fract_bits)));
	std::cout << this->_fpoint << std::endl;
	return ;
}

Fixed::Fixed( const int fp )
{
	std::cout << "Int constructor called" <<std::endl;
	this->_fpoint = fp << this->_fract_bits;

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
	return (this->_fpoint);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpoint = raw;
}

float	Fixed::toFloat( void ) const
{
	return (this->_fpoint / (float)(1 << this->_fract_bits));
}

int		Fixed::toInt( void ) const
{
	return (this->_fpoint >> this->_fract_bits);
}

std::ostream& operator<< (std::ostream &out, const Fixed &flot)
{
	out << flot.toFloat();

    return out;
}