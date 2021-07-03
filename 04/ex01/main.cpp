/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 19:10:43 by sglass            #+#    #+#             */
/*   Updated: 2021/04/24 16:44:00 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "CtBot.hpp"
#include "Pistoool.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* d = new CtBot();


	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* pi = new Pistoool();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	
	delete me;
	delete c;
	// delete b;
	delete pr;
	delete pf;
	delete pi;

////////////////////////////////////////////
	// me->recoverAP();
	// me->recoverAP();
	// me->recoverAP();
	// std::cout << *me;
//TEST BOTA///////////////////////////////////////////


	// me->equip(pf);
	// me->attack(*c);
	// std::cout << *me;
	// me->attack(*c);
	// std::cout << *me;
	// me->attack(*c);
	// std::cout << *me;
	// me->attack(*c);
	// std::cout << *me;
///TEST PISTA////////////////////////////////////////////
	// me->recoverAP();
	// me->recoverAP();
	// me->recoverAP();
	// me->recoverAP();

	// me->equip(pi);
	// me->attack(d);
	// std::cout << *me;


	return 0;
}