/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:38:46 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 10:17:37 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy( void )
{
	return ;
}

Enemy::~Enemy( void )
{
	return ;
}

Enemy::Enemy( Enemy const &src )
{
	*this = src;

	return ;
}

Enemy&	Enemy::operator=( Enemy const &rhs )
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
        this->_type = rhs._type;
	}
	return (*this);
}


void	Enemy::takeDamage(int dmg)
{
	if (dmg <= 0)
		return  ;
	_hp = _hp - dmg;
	if (_hp < 0)
		_hp = 0;
}

std::string const &Enemy::getType() const
{
	return (_type);
}

int			Enemy::getHP() const
{
	return (_hp);
}