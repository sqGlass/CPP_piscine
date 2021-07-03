/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:53:25 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 23:58:24 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
    std::cout << "Im the instance of ZombieEvent and i was born!" << std::endl;
	return ;
}

ZombieEvent::~ZombieEvent( void )
{
    std::cout << "ZombieEvent instance dead" << std::endl;
	return ;
}

Zombie* ZombieEvent:: newZombie( std::string name )
{
    std::cout << "Im the newZombie function. Now I take zombie name from you and zombie type from my private field." << std::endl;
    std::cout << "Than I will call constructor of Zombie class and give him name and type. He will born!" << std::endl << std::endl;
    Zombie* nZombie = new Zombie(name, this->type);
    return (nZombie);
    
}
void    ZombieEvent::setZombieType( std::string type )
{
    std::cout << "Im the setZombieType function. Now I take the type of zombie and save it in my private field" << std::endl;
    this->type = type;
}