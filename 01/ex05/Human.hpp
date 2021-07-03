/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:48:35 by sglass            #+#    #+#             */
/*   Updated: 2021/04/12 13:44:10 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"
# include <iostream>
# include <sstream>

class Human
{
 
	private:

		const Brain b;


	public:

	Human( void );
	~Human ( void );
	
	std::string identify( void ) const;
	const Brain &getBrain( void )  const;
};

# endif