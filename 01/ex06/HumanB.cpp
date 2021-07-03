/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:17:06 by sglass            #+#    #+#             */
/*   Updated: 2021/04/12 20:25:38 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name) : name(name)
{
	return;
}

HumanB::~HumanB( void )
{
	return ;
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with his " << weap->getType() << std::endl;
}

void	HumanB::setWeapon( Weapon &weap )
{
	this->weap = &weap;
}