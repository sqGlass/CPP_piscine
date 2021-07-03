/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:15:05 by sglass            #+#    #+#             */
/*   Updated: 2021/04/19 21:35:33 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(int hp, int maxHP, int energy_points, int max_energy_points, std::string name, int melee_atack_damage, int ranged_attack_damage, int armor_dmg_reduct) : _hit_points(hp), _max_hit_points(maxHP), _energy_points(energy_points),
  _max_energy_points(max_energy_points), _level(1), _name(name), _melee_atack_damage(melee_atack_damage), _ranged_attack_damage(ranged_attack_damage), _armor_dmg_reduct(armor_dmg_reduct)
{
	
	std::cout << "ClapTrap constructor!" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const &name ) : _hit_points(100), _max_hit_points(100), _energy_points(100),
_max_energy_points(100), _level(1), _name(name), _melee_atack_damage(30),
_ranged_attack_damage(20), _armor_dmg_reduct(5)
{
	std::cout << "ClapTrap constructor!" << std::endl;
	return;
}

ClapTrap::ClapTrap( void )
{
	std::cout << "ClapTrap constructor!" << std::endl;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor!" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &src )
{
	*this = src;

	return ;
}



ClapTrap&	ClapTrap::operator=( ClapTrap const &rhs )
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


int		ClapTrap::rangedAttack( std::string const &target )
{
	std::cout << "ClapTrap range attack on target " << target << std::endl;
	return (_ranged_attack_damage);
}

int	ClapTrap::meleeAttack( std::string const &target )
{
	std::cout << "ClapTrap melee attack on target " << target << std::endl;
	return (_melee_atack_damage);
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::ostringstream ostr;
    std::string dmgString;
	float percent;
	int dmg;
	
	if (_hit_points == 0)
	{
		std::cout << "Do not scoff at the dead body !!" << std::endl;
		return ;
	}
	if (amount == 0)
		return ;
    percent = (float)amount / 100;
	dmg = (float) percent * (float) _armor_dmg_reduct;
	dmg = amount - dmg;
	this->_hit_points = _hit_points - dmg;
	if (this->_hit_points < 0)
		this->_hit_points = 0;
	ostr << dmg;
	dmgString = ostr.str();
	std::cout << _name + " takes " + dmgString + " damage!" << std::endl;
	if (_hit_points == 0)
		std::cout << _name << " DESTROYED!!" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	if (this->_hit_points > 100)
		this->_hit_points = 100;
}

int		ClapTrap::get_HP( void )
{
	return (_hit_points);
}

int		ClapTrap::get_energy( void )
{
	return (_energy_points);
}

std::string		ClapTrap::getName( void ) const
{
	return (this->_name);
}

// int		ClapTrap::get_range_dmg( void )
// {
//     return (this->_ranged_attack_damage);
// }

// int		ClapTrap::get_melee_dmg( void )
// {
//     return (this->_melee_atack_damage);
// }

// int		ClapTrap::get_armor_reduct( void )
// {
//     return (this->_armor_dmg_reduct);
// }

// void	ClapTrap::set_HP( int hp )
// {
//     this->_hit_points = hp;
// }

// void	ClapTrap::set_energy( int energy )
// {
//     this->_energy_points = energy;
// }

// void	ClapTrap::set_range_dmg( int rng_dmg )
// {
//     this->_ranged_attack_damage = rng_dmg;
// }

// void	ClapTrap::set_melee_dmg( int melee_dmg )
// {
//     this->_melee_atack_damage = melee_dmg;
// }

// void	ClapTrap::set_armor_reduct( int arm_red )
// {
//     this->_armor_dmg_reduct = arm_red;
// }

// void	ClapTrap::set_name( std::string const &name )
// {
//     this->_name = name;
// }