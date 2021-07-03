/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:10:43 by sglass            #+#    #+#             */
/*   Updated: 2021/04/23 18:09:18 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}


SuperMutant::~SuperMutant( void )
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const &src ) : Enemy(src)
{
	return ;
}

SuperMutant&	SuperMutant::operator=( SuperMutant const &rhs )
{
	Enemy::operator=(rhs);
	return (*this);
}

void	SuperMutant::takeDamage(int dmg)
{
	int		dmg1;
	dmg1 = dmg - 3;
	Enemy::takeDamage(dmg1);
}
