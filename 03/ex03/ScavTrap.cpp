/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:52:14 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 13:56:35 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap(100, 100, 50, 50, "Robo", 20, 15, 3)
{
	std::cout << this->_name << " jumped from heaven!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( std::string const &name ) : ClapTrap(100, 100, 50, 50, name, 20, 15, 3)
{
	std::cout << this->_name << " jumped from heaven!" << std::endl;
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor picked up " << this->_name << " and they disappeared!" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const &src )
{
	*this = src;

	return ;
}



ScavTrap&	ScavTrap::operator=( ScavTrap const &rhs )
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

int		ScavTrap::rangedAttack( std::string const &target )
{
	std::cout << _name << " showed the middle finger to "  << target << ", causing " << _ranged_attack_damage << " points of damage for his honor!" << std::endl;
	return (_ranged_attack_damage);
}

int	ScavTrap::meleeAttack( std::string const &target )
{

	std::cout << _name << " rested his forehead to " << target <<  "'s forehead, causing " << _melee_atack_damage << " points of damage for his personal space!!" << std::endl;
	return (_melee_atack_damage);
}

void	ScavTrap::takeDamage( unsigned int amount )
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
	std::cout << _name + " takes " + dmgString + " points of pain!" << std::endl;
	if (_hit_points == 0)
		std::cout << _name << " DEACTIVATED!!" << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this->_name  << " took " << amount << " pills. Hope he got better!)" << std::endl;
	if (this->_hit_points > 100)
		this->_hit_points = 100;
}

void		ScavTrap::challengeNewcomer( std::string const & target )
{
	int dmg;
	int attck;
    std::ostringstream ostr;
    std::string dmgString;

	dmg = std::rand() % 101;
	attck = std::rand() % 5;
    ostr << dmg;
	dmgString = ostr.str();
	std::string challenges[5];
	challenges[0] = "Here we go! " + target + " should leave the friend zone!";
	challenges[1] = "Okeeey, will " + target + " be able to surpass Mom's Friend's Son?";
	challenges[2] = target + " must try to find the meaning of life!";
	challenges[3] = "Ohhh, will " + target + " pass the Cub3D to dushnila?";
	challenges[4] =  target + " must drink one non-alcoholic beer!";
	std::cout << challenges[attck] << std::endl;
}