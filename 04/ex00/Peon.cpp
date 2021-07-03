/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:37:11 by sglass            #+#    #+#             */
/*   Updated: 2021/04/21 14:22:54 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon( std::string const &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon( void )
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon::Peon( Peon const &src )
{
	*this = src;

	return ;
}

Peon&	Peon::operator=( Peon const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
	}
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}