/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinijaTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:40:08 by sglass            #+#    #+#             */
/*   Updated: 2021/04/19 21:50:05 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) : ClapTrap(60, 60, 120, 120, "Robo", 60, 5, 0)
{
	std::cout << this->_name << " peeled off the wall!" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap( std::string const &name ) : ClapTrap(60, 60, 120, 120, name, 60, 5, 0)
{
	std::cout << this->_name << " peeled off the wall!" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "Destructor patted the  " << this->_name << "'s shoulder and said: \"it's time to go home!\"" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const &src )
{
	*this = src;

	return ;
}



NinjaTrap&	NinjaTrap::operator=( NinjaTrap const &rhs )
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

int		NinjaTrap::rangedAttack( std::string const &target )
{
	std::cout << _name << " said: \"Nu ka podoshel!\" to " << target << ", frightening him on " << _ranged_attack_damage << " health points!" << std::endl;
	return (_ranged_attack_damage);
}

int	NinjaTrap::meleeAttack( std::string const &target )
{

	std::cout << _name << " cut off 2/3 of the " << target <<  "'s body, causing " << _melee_atack_damage << " points of damage!!" << std::endl;
	return (_melee_atack_damage);
}

void	NinjaTrap::takeDamage( unsigned int amount )
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
	std::cout << _name + " lost " + dmgString + " drops of blood!" << std::endl;
	if (_hit_points == 0)
		std::cout << _name << " closed his eyes for the last time.." << std::endl;
}

void	NinjaTrap::beRepaired( unsigned int amount)
{
	this->_hit_points = this->_hit_points + amount;
	std::cout << this->_name  << " applied a shuriken to his wounds and restored health for " << amount << " points" << std::endl;
	if (this->_hit_points > _max_hit_points)
		this->_hit_points = _max_hit_points;
}

void	NinjaTrap::ninjaShoebox( FragTrap &target )
{
	std::cout << "Good evening, mr. " << target.getName() << ", your last evening." << std::endl;
	std::cout << _name << " runs along the wall towards " << target.getName() << " , jumps off and begins to shred him with two swords!" << std::endl;

	while (target.get_HP() != 0)
	{
		std::cout << "*still shredding...*" << std::endl;
		target.takeDamage(10);
		if (_hit_points > 5)
		{
			std::cout << "Auch!" << " while shredding ninja got scratched!!!" << std::endl;
			takeDamage(1);
		}
	}
	std::cout << _name << ", having bowed, leaves.." << std::endl;
}

void	NinjaTrap::ninjaShoebox( ScavTrap &target )
{
	std::cout << _name + " *performs the dance of death*" << std::endl;
	std::cout << target.getName() << " is dying of admiration..." << std::endl;
	target.takeDamage(1000);
}

void	NinjaTrap::ninjaShoebox( ClapTrap &target )
{
	std::cout << "Ninja: " << "Say goodbye to the life, " + target.getName() << std::endl;
	std::cout << target.getName() << ": Son.." << std::endl;
	std::cout << "Ninja: " << "Father..." << std::endl;
	std::cout << target.getName() << ": Son.." << std::endl;
	std::cout << "Ninja: " << "Father..." << std::endl;
	std::cout << target.getName() << ": Son.." << std::endl;
	std::cout << "Ninja: " << "Father..." << std::endl;
	std::cout << target.getName() << ": Son.." << std::endl;
	std::cout << "Ninja: " << "Father..." << std::endl;
	std::cout << target.getName() << ": Son.." << std::endl;
	std::cout << "Ninja: " << "Father..." << std::endl;
	std::cout << target.getName() << ": Son.." << std::endl;
	std::cout << "Ninja: " << "Father..." << std::endl;
	takeDamage(1000);
}

void	NinjaTrap::ninjaShoebox( NinjaTrap &target )
{

	for(int i = 0; i < 10; i++)
	{
		std::cout << _name << " trying to hit " << target.getName() << std::endl;
		std::cout << target.getName() << " dodged the blow!" << std::endl;
		std::cout << target.getName() << " trying to hit " << _name << std::endl;
		std::cout << _name << " dodged the blow!" << std::endl;
	}
	std::cout << std::endl;
	std::cout << _name << ": Ufff, dude, may be next time?" << std::endl;
	std::cout << target.getName() << ": Yeah, sure.." << std::endl;
}
