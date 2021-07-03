/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 12:09:56 by sglass            #+#    #+#             */
/*   Updated: 2021/04/13 10:59:15 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n ) : n(n)
{
    srand(time(NULL));
    this->nZombie = new Zombie[n];
    return ;
}

ZombieHorde::~ZombieHorde ( void )
{
    std::cout << "instance of ZombieHorde deleted!" << std::endl;
    delete [] this->nZombie;
    return ;
}

void    ZombieHorde::announce( void )
{
    for (int i = 0; i < n; i ++)
        this->nZombie[i].announce();
}