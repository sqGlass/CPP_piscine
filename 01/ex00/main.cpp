/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:24:18 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 17:14:05 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap( void )
{
	Pony* littlePony1 = new Pony(7, "July", "icecream", "sglass");
	littlePony1->ponyGreeting();
	std::cout << std::endl << std::endl << std::endl << std::endl;
	
	std::cout << "Hey! I live and enjoy my life!!" << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl; 
	delete littlePony1;
}

void	ponyOnTheStack( void )
{
	Pony littlePony2 (7, "July", "icecream", "sglass");
	littlePony2.ponyGreeting();
	std::cout << std::endl << std::endl << std::endl << std::endl;

	std::cout << "Hey! I live and enjoy my life!!" << std::endl;
	std::cout << std::endl << std::endl << std::endl << std::endl; 
}

int main()
{
	ponyOnTheHeap();
	std::cout << std::endl; 
	std::cout << "**************************************************************************************" << std::endl;
	std::cout << std::endl;
	ponyOnTheStack();
	
	return 0;
}