/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pistoool.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:26:18 by sglass            #+#    #+#             */
/*   Updated: 2021/04/23 18:18:37 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pistoool.hpp"

Pistoool::Pistoool( void ) : AWeapon("Pistoool", 8, 1000)
{
	return ;
}

Pistoool::~Pistoool( void )
{
	return ;
}

Pistoool::Pistoool( Pistoool const &src ) : AWeapon(src)
{

	return ;
}

Pistoool&	Pistoool::operator=( Pistoool const &rhs )
{
	AWeapon::operator=(rhs);
	return (*this);
}

void Pistoool::attack() const
{
	std::cout << "* tra-ta-ta-ta-ta-ta-tat-aaaaaaa *" << std::endl;
}