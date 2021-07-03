/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:36:22 by sglass            #+#    #+#             */
/*   Updated: 2021/04/14 14:15:41 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>
#include <iomanip>  
#include <cmath>

class Fixed
{

public:

	Fixed( void );
	Fixed( const int fp );
	Fixed( const float fp );
	~Fixed( void );
	Fixed( Fixed const & src );
	
	Fixed &		operator=( Fixed const & rhs );

	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int _fpoint;
	static const int _fract_bits = 8;

};

std::ostream& operator<< (std::ostream &out, const Fixed &flot);

#endif