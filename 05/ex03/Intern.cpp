/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:56:00 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 17:30:50 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{
		_forms[0] = new PresidentialPardonForm("asd"); 
		_forms[1] = new RobotomyRequestForm("asd");
		_forms[2] = new ShrubberyCreationForm("asd");
	return ;
}

Intern::~Intern( void )
{
	for (int i = 0; i < 3; i++)
		delete _forms[i];
	return ;
}

Intern::Intern( Intern const &src )
{

	for (int i = 0; i < 3; i++)
	{
		_forms[i] = src._forms[i]->clone();
	}
	return ;
}

Intern&	Intern::operator=( Intern const & rhs)
{
	if (this == &rhs)
        return *this;
	for (int i = 0; i < 3; i++)
		delete _forms[i];
	for (int i = 0; i < 3; i++)
		_forms[i] = rhs._forms[i]->clone();
	return (*this);
}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (_forms[i]->getName().compare(name) == 0)
		{
			Form *f = _forms[i]->clone(target);
			return (f);
		}
	}
	std::cout << "Dont know this form!" << std::endl;
	return (0);
}