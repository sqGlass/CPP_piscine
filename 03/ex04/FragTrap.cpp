/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:13:01 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 17:59:00 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	_name = "Robo";
	_level = 1;
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_melee_atack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_dmg_reduct = 5;
	std::cout << this->_name << " BOOOORN!" << std::endl;
	return ;
}

FragTrap::FragTrap( std::string const &name )
{
	_name = name;
	_level = 1;
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_melee_atack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_dmg_reduct = 5;
	std::cout << this->_name << " BOOOORN!" << std::endl;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor gobbled up " << this->_name << "!" << std::endl;
	return ;
}

int		FragTrap::rangedAttack( std::string const &target )
{
	std::cout << _name << " blew a kiss to "  << target << " , causing " << _ranged_attack_damage << " points of damage for his masculinity heart!" << std::endl;
	return (_ranged_attack_damage);
}

int	FragTrap::meleeAttack( std::string const &target )
{

	std::cout << _name << " touched the "  << target << "'s shoulder, causing " << _melee_atack_damage << " points of damage for his masculinity heart!!" << std::endl;
	return (_melee_atack_damage);
}

void	FragTrap::takeDamage( unsigned int amount )
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

void	FragTrap::beRepaired( unsigned int amount)
{
	std::cout << this->_name << " became on " << amount << " points healthier!" << std::endl;
	this->_hit_points = this->_hit_points + amount;
	if (this->_hit_points > 100)
		this->_hit_points = 100;
}

FragTrap::FragTrap( FragTrap const &src )
{
	*this = src;

	return ;
}



FragTrap&	FragTrap::operator=( FragTrap const &rhs )
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

int		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int dmg;
	int attck;
    std::ostringstream ostr;
    std::string dmgString;

	dmg = std::rand() % 101;
	attck = std::rand() % 5;
    ostr << dmg;
	dmgString = ostr.str();
	std::string attacks[5];
	attacks[0] = this->_name + " slaps the " + target + "'s ASS!!! " + "it caused ~" + dmgString + " for him!";
	attacks[1] = this->_name + " used the VERTUSHKA ability! " + target + " lost ~" + dmgString + "HP!!";
	attacks[2] = "OH MYY " + this->_name + " says to " + target + ":\"Hey, boy, she already has a boyfriend))\"!" + " it costs ~" + dmgString + " HP for his heart!!";
	attacks[3] = this->_name + " tried to hit with all his might, but slipped.. " + target + " fell down laughing and injured himself by ~" + dmgString + " hp=/!"; 
	attacks[4] = this->_name + " :\"Hey, man look in the mirror!!\" " + target + " looked and began to cry. " +  "It was cruel. ~" + dmgString + " damage for mental health.";
	if (_energy_points < 25)
	{
		std::cout << "Ohhh.. " << this->_name <<  "so tired maan, he cant do anything anymore..." << std::endl;
		return (0);
	}
	if (dmg == 100)
		std::cout << "ULTAAAAAA!!!" << std::endl; 
	std::cout << attacks[attck] << std::endl;
	_energy_points = _energy_points - 25;
	return (dmg);
}