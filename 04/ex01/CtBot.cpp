/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CtBot.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:16:26 by sglass            #+#    #+#             */
/*   Updated: 2021/04/23 18:19:46 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CtBot.hpp"

CtBot::CtBot( void ) : Enemy(70, "CtBot")
{
	std::cout << "* aagaggagagaga *" << std::endl;
	return ;
}


CtBot::~CtBot( void )
{
	std::cout << "* FUUUUUU *" << std::endl;
	return ;
}

CtBot::CtBot( CtBot const &src ) : Enemy(src)
{
	return ;
}

CtBot&	CtBot::operator=( CtBot const &rhs )
{
	Enemy::operator=(rhs);
	return (*this);
}