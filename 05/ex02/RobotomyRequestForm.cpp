/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:12:03 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 13:29:33 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) :  Form("RobotomyRequestForm", 72, 45, "asd")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequestForm", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src ) : Form(src)
{
	return ;
}

void	RobotomyRequestForm::action( void ) const
{
	int coin;
	coin = std::rand() % 2;
	if (coin == 1)
		std::cout << "Drrrrrrrrrrrrrrr " << getTarget() <<  " has been robotomized!" << std::endl;
	else
		std::cout << "Drrrrrrrrrrrrrrr " << getTarget() <<  " FAIL FAIL FAIL!" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( RobotomyRequestForm const & )
{
	return (*this);
}
