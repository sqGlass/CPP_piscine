/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:11:29 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:20:47 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon( void )
{
	return ;
}

AWeapon::~AWeapon( void )
{
	return ;
}

AWeapon::AWeapon( AWeapon const &src )
{
	*this = src;

	return ;
}

AWeapon&	AWeapon::operator=( AWeapon const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return (*this);
}

std::string const	&AWeapon::getName( void ) const
{
	return (this->_name);
}

int				AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int				AWeapon::getDamage() const
{
	return (this->_damage);
}

