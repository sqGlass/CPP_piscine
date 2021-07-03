/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:16:50 by sglass            #+#    #+#             */
/*   Updated: 2021/04/23 18:20:07 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist( void ) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::~PowerFist( void )
{
	return ;
}

PowerFist::PowerFist( PowerFist const &src ) : AWeapon(src)
{
	return ;
}

PowerFist&	PowerFist::operator=( PowerFist const &rhs )
{
	AWeapon::operator=(rhs);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}