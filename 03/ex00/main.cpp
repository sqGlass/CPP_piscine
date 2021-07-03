/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 13:50:38 by sglass            #+#    #+#             */
/*   Updated: 2021/04/19 12:42:37 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	randomAttacks( void )
{
	FragTrap *man1;
	FragTrap *man2;
	std::string fighterName1 = "Vasya";
	std::string fighterName2 = "Leha";
	int coin;
	int damage;

	std::cout << "Hello, ladies and gentlemen! Who will start the fight? " << fighterName1 << " (RESHKA) or " << fighterName2 << " (OREL)?" << std::endl;
	coin = std::rand() % 2;
	if (coin == 0)
	{
		std::cout << "RESHKA! " << fighterName1 << " will start!" << std::endl;
		man1 = new FragTrap(fighterName1);
		man2 = new FragTrap(fighterName2);
	}
	else
	{
		std::cout << "OREEL! " <<  fighterName2 << " will start!" << std::endl;
		man1 = new FragTrap(fighterName2);
		man2 = new FragTrap(fighterName1);
	}
	while (man1->get_energy() != 0 && man2->get_energy() != 0)
	{
		damage = man1->vaulthunter_dot_exe(man2->getName());
		man2->takeDamage(damage);
		if (man2->get_HP() == 0)
		{
			std::cout << "OH YEEEAH! That was huuuuge!" << std::endl;
			break ;
		}
		damage = man2->vaulthunter_dot_exe(man1->getName());
		man1->takeDamage(damage);
		if (man1->get_HP() == 0)
		{
			std::cout << "OH YEEEAH! That was huuuuge!" << std::endl;
			break ;
		}
	}
	if (man1->get_HP() > 0 && man2->get_HP() > 0)
	{
		std::cout << "HAHAHHA this guys are girls... nothing died today except their honor! Bye everyone!" << std::endl;
	}
	delete (man1);
	delete (man2);
}

int main()
{
	std::srand(time(NULL));
	// int damage;
	// FragTrap man1("Vasya");
	// FragTrap man2("Leha");

	// damage = man1.meleeAttack(man2.getName());
	// man2.takeDamage(damage);
	// damage = man1.rangedAttack(man2.getName());
	// man2.takeDamage(damage);
	// damage = man1.meleeAttack(man2.getName());
	// man2.takeDamage(damage);
	// damage = man1.rangedAttack(man2.getName());
	// man2.takeDamage(damage);
	// damage = man1.meleeAttack(man2.getName());
	// man2.takeDamage(damage);
	// damage = man1.rangedAttack(man2.getName());
	// man2.takeDamage(damage);

	randomAttacks();

	return (0);
}