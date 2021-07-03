/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:24:14 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 15:40:16 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( int age,  std::string name, std::string dream, std::string owner) : age(age), name(name), dream(dream), owner(owner)
{
	return ;
}

Pony::~Pony( void )
{
	std::cout << "But now, darling, goodbye, I should go... " << std::endl;
	std::cout << "See u.." << std::endl;
	std::cout << "                *POOF* (Pony destroyed!)" << std::endl;
	return ;
}

void	Pony::ponyGreeting ( void )
{
	std::cout << "Hello! My name is " << this->name << "! Im " << this->age << " years old. I live with my lovely " << this->owner << " and I dreaming about " << this->dream << ":)" << std::endl;
	
}