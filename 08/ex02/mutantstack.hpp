/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:58:14 by sglass            #+#    #+#             */
/*   Updated: 2021/05/05 17:28:43 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef mutantstack_H
#define mutantstack_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip> 
#include <stack> 
#include <exception>


template <typename T1>
class mutantstack : public std::stack<T1>
{	
    public:

		mutantstack  (void );
		virtual	~mutantstack( void );
		mutantstack&	operator=( mutantstack const &rhs );
		mutantstack( mutantstack const &src );

		void	push(const T1 &obj);
		
		T1* begin();
		T1*	end();

		class iterator
		{
			public:
				iterator (void );
				iterator (T1 * p);
				~iterator( void );
				iterator&	operator=( iterator const &rhs );
				iterator( iterator const &src );

				T1&				operator*();
				iterator&		operator++();
				iterator&		operator--();
				bool			operator==(const iterator &p2);
				bool			operator!=(const iterator &p2);

			private:

				T1* pointer;
		};




	private:
		T1* _begin;
		T1* _end;
		
	
};

#endif