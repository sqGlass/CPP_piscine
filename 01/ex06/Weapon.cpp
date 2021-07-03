/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:56:19 by sglass            #+#    #+#             */
/*   Updated: 2021/04/12 18:43:58 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string t_weapon ) : type(t_weapon)
{
	return ;
}

Weapon::~Weapon( void )
{
	return ;
}

const std::string &Weapon::getType ( void )
{
	return (this->type);
}

void	Weapon::setType( std::string type )
{
	this->type = type;
}

