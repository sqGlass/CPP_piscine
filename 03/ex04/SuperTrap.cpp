/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:29:46 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 19:42:35 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "SuperTrap.hpp"

 SuperTrap::SuperTrap(  std::string const &name ) //: NinjaTrap(name), FragTrap(name)
{
	_name = name;
	_hit_points = Hit_Points;
	_max_hit_points = Max_hp;
	_energy_points = En_p;
	_max_energy_points = Max_energy;
	_melee_atack_damage = Melee;
	_ranged_attack_damage = Range_att;
	_armor_dmg_reduct = Arm_red;

	std::cout << this->_name << " SuperTrap born!" << std::endl;
	return ;
}

 SuperTrap::SuperTrap( void ) //: FragTrap("Robo"), NinjaTrap("Robo")
{
	_name = "RRobo";
	_hit_points = Hit_Points;
	_max_hit_points = Max_hp;
	_energy_points = En_p;
	_max_energy_points = Max_energy;
	_melee_atack_damage = Melee;
	_ranged_attack_damage = Range_att;
	_armor_dmg_reduct = Arm_red;

	std::cout << this->_name << " SuperTrap born!" << std::endl;
	return ;
}

int		SuperTrap::rangedAttack( std::string const &target )
{
	return (FragTrap::rangedAttack(target));
}

int		SuperTrap::meleeAttack( std::string const &target )
{
	return (NinjaTrap::meleeAttack(target));
}

SuperTrap::~SuperTrap( void )
{
	std::cout << "SuperTrap destructor" << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const &src )
{
	*this = src;

	return ;
}



SuperTrap&	SuperTrap::operator=( SuperTrap const &rhs )
{
	if (this != &rhs)
	{
		this->_hit_points = rhs._hit_points;
		this->_max_hit_points = rhs._max_hit_points;
		this->_energy_points = rhs._energy_points;
		this->_max_energy_points = rhs._max_energy_points;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_melee_atack_damage = rhs._melee_atack_damage;
		this->_ranged_attack_damage = rhs._ranged_attack_damage;
		this->_armor_dmg_reduct = rhs._armor_dmg_reduct;
	}
	return (*this);
}

void	SuperTrap::takeDamage( unsigned int amount )
{
	std::ostringstream ostr;
    std::string dmgString;
	
	if (_hit_points == 0)
	{
		std::cout << "Do not scoff at the dead body !!" << std::endl;
		return ;
	}
	if (amount == 0)
		return ;
	this->_hit_points = _hit_points - amount;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	ostr << amount;
	dmgString = ostr.str();
	std::cout << _name + " SuperTrap lost " + dmgString + " HP!" << std::endl;
	if (_hit_points == 0)
		std::cout << _name << " " << std::endl;
}

void	SuperTrap::beRepaired( unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this->_name  << " SuperTrap restored " << amount << " HP" << std::endl;
	if (this->_hit_points > _max_hit_points)
		this->_hit_points = _max_hit_points;
}