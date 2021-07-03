/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:42:37 by sglass            #+#    #+#             */
/*   Updated: 2021/04/09 19:57:10 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
    int random_value1;
    int random_value2;

    std::string names[6] = { "Sasha", "Timofey", "Diman",
    "Dimon", "Niyaz", "Amir" };

    std::string types[6] = {  "Capomafioso", "Consigliere", "Sotto Capo",
    "Caporegime", "Regime", "Associate" };

    // srand(time(NULL));
    random_value1 = std::rand() % 6;
    // srand(time(NULL));
    random_value2 = std::rand() % 6;
    this->name = names[random_value1];
    this->type = types[random_value2];

    std::cout << "Im " << this->name << " and i was born!" << std::endl;
    return ;
}

Zombie::~Zombie( void )
{
    std::cout  << "<" << this->name << " (" << this->type << ")> dead" << std::endl;
    return ;
}

void    Zombie::announce( void )
{
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiinnnssss..." << std::endl;
}
