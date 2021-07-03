/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scholar.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 13:57:29 by sglass            #+#    #+#             */
/*   Updated: 2021/05/01 21:28:28 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCHOLAR_H
#define SCHOLAR_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip> 
#include <math.h> 
#include <exception>

class Scholar
{	
    public:

		Scholar( std::string const &liter );
		~Scholar( void );
		Scholar&	operator=( Scholar const &rhs );
		Scholar( Scholar const &src );

		void	convert( int code );
		int		parser( void );
		void	output( void );


	private:
	
		std::string _liter;
		int			_flagDot;
		int			_flagNull;
		int			_i;
		double		_d;
		float		_f;
		char		_c;
	
};

#endif