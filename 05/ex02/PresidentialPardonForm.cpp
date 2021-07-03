/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:34:42 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 13:17:16 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) :  Form("PresidentialPardonForm", 25, 5, "asd")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", 25, 5, target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src ) : Form(src)
{
	return ;
}

void	PresidentialPardonForm::action( void ) const
{
    std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox!" << std::endl;
	
}




PresidentialPardonForm&	PresidentialPardonForm::operator=( PresidentialPardonForm const & )
{
	return (*this);
}