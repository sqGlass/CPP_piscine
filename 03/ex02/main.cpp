/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:52:04 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 19:45:58 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(time(NULL));
	int damage;
	ScavTrap man1("Vasya");
	FragTrap man2("Leha");

//////////////////////////////////////////////////////////////////

	damage = man1.meleeAttack(man2.getName());
	man2.takeDamage(damage);
	damage = man1.rangedAttack(man2.getName());
	man2.takeDamage(damage);
	damage = man1.meleeAttack(man2.getName());
	man2.takeDamage(damage);
	damage = man1.rangedAttack(man2.getName());
	man2.takeDamage(damage);
	damage = man1.meleeAttack(man2.getName());
	man2.takeDamage(damage);
	damage = man1.rangedAttack(man2.getName());
	man2.takeDamage(damage);


	// man1.challengeNewcomer(man2.getName());
	// man1.challengeNewcomer(man2.getName());
	// man1.challengeNewcomer(man2.getName());
	// man1.challengeNewcomer(man2.getName());
	// man1.challengeNewcomer(man2.getName());
	// man1.challengeNewcomer(man2.getName());
	
//////////////////////////////////////////////////////////////////
	
	// damage =man2.meleeAttack(man2.getName());
	// man1.takeDamage(damage);
	// damage =man2.rangedAttack(man2.getName());
	// man1.takeDamage(damage);
	// damage =man2.meleeAttack(man2.getName());
	// man1.takeDamage(damage);
	// damage =man2.rangedAttack(man2.getName());
	// man1.takeDamage(damage);
	// damage =man2.meleeAttack(man2.getName());
	// man1.takeDamage(damage);
	// damage =man2.rangedAttack(man2.getName());
	// man1.takeDamage(damage);

	// damage = man2.vaulthunter_dot_exe(man1.getName());
	// man1.takeDamage(damage); 

	return (0);
}