/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 14:16:58 by sglass            #+#    #+#             */
/*   Updated: 2021/04/21 14:55:01 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Servant.hpp"

int main()
{
	// Sorcerer robert("Robert", "the Magnificent");
	// Victim jim("Jimmy");
	// Peon joe("Joe");
	// std::cout << robert << jim << joe;
	// robert.polymorph(jim);
	// robert.polymorph(joe);


	//////////////////////////////////////////////////////////
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Servant bill("Bill");
	Peon joe("Joe");

	std::cout << robert << bill << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bill);
	return 0;
}