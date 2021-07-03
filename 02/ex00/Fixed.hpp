/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:36:22 by sglass            #+#    #+#             */
/*   Updated: 2021/04/14 13:29:37 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_H
#define FIXED_H

#include <string>
#include <iostream>

class Fixed
{

public:

	Fixed( void );
	~Fixed( void );
	Fixed( Fixed const & src );

	
	Fixed &		operator=( Fixed const & rhs );

	int 	getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int _fpoint;
	static const int _fract_bits = 8;

};
#endif