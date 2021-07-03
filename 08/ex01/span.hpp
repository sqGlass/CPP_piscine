/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:07:51 by sglass            #+#    #+#             */
/*   Updated: 2021/05/05 18:01:13 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_H
#define SPAN_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip> 
#include <math.h> 
#include <exception>
#include <vector>

class span
{	
    public:

		span ( void );
		span( unsigned int n );
		~span( void );
		span&	operator=( span const &rhs );
		span( span const &src );

		void	addNumber(unsigned int num);
		template<typename T>
		void	betterAddN(typename T::iterator beg, typename T::iterator endd)
		{
			if (_n < std::distance(beg, endd))
				throw std::out_of_range("array is full");
			_arr.insert(_arr.end(), beg, endd);

		}
		
		int		shortestSpan( void );
		int		longestSpan( void );

	private:
		unsigned int _n;
		std::vector<int> _arr;
		
	
};

#endif