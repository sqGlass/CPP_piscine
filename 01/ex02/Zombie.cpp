/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 17:59:57 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 22:52:05 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name, std::string type ) : name(name), type(type)
{
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

