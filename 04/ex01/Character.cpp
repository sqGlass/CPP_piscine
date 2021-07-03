/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:24:22 by sglass            #+#    #+#             */
/*   Updated: 2021/04/23 18:25:19 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : _name(name)
{
	_weap = 0;
	_action_points = 40;
	return ;
}

Character::Character( void )
{
	return ;
}

Character::~Character( void )
{
	return ;
}

Character::Character( Character const &src )
{
	*this = src;

	return ;
}

Character&	Character::operator=( Character const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_action_points = rhs._action_points;
		this->_weap = rhs._weap;  // проверить!!
	}
	return (*this);
}

void 		Character::recoverAP()
{
	_action_points = _action_points + 10;
	if (_action_points > 40)
		_action_points = 40;
}

std::string const &Character::getName() const
{
	return (this->_name);
}

int			Character::getAP( void ) const
{
	return (this->_action_points);
}

AWeapon*		Character::getWeap( void ) const
{
	return (this->_weap);  //не копирую ли я
}

void 		Character::attack(Enemy* en)
{
	if (_action_points <= 0 || _action_points < _weap->getAPCost() || _weap == 0 || en == 0)
		return ;
	std::cout << _name << " attacks " << en->getType() << " with a " << _weap->getName() << std::endl;
	_weap->attack();
	_action_points = _action_points - _weap->getAPCost();
	en->takeDamage(_weap->getDamage());
	if (en->getHP() <= 0)
		delete en;
}

void 		Character::equip(AWeapon* aw) //копирование или присвоение? 
{
	_weap = aw;
}

std::ostream& operator<<(std::ostream &out, const Character &c)
{
	if (c.getWeap())
		out << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeap()->getName() << std::endl;
	else
		out << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}