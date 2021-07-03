/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:00:04 by sglass            #+#    #+#             */
/*   Updated: 2021/04/23 18:19:26 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::~PlasmaRifle( void )
{
	return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const &src ) : AWeapon(src)
{
	return ;
}

PlasmaRifle&	PlasmaRifle::operator=( PlasmaRifle const &rhs )
{
	AWeapon::operator=(rhs);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}



