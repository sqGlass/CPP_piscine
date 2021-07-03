/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Servant.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:47:59 by sglass            #+#    #+#             */
/*   Updated: 2021/04/21 16:44:50 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Servant.hpp"

Servant::Servant( std::string const &name) : Victim(name)
{
	std::cout << "I was born(" << std::endl;
	return ;
}

Servant::Servant( void )
{
	std::cout << "I was born(" << std::endl;
	return ;
}

Servant::~Servant( void )
{
	std::cout << "Finally! Im dead!" << std::endl;
	return ;
}

Servant::Servant( Servant const &src )
{
	*this = src;

	return ;
}

Servant&	Servant::operator=( Servant const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
	}
	return (*this);
}

void	Servant::getPolymorphed() const
{
	std::cout << _name << " has been turned into a hot dog!" << std::endl;
}