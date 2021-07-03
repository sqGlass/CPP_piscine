/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:48:16 by sglass            #+#    #+#             */
/*   Updated: 2021/04/13 11:15:17 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human( void )
{
	return ;
}

Human::~Human( void )
{
	 std::cout << "Human dead!" << std::endl;
	return ;
}

std::string Human::identify( void ) const
{
	std::string addr;
	addr = b.identify();
	return (addr);
}

const Brain &Human::getBrain( void ) const
{
	return (this->b);
}