/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:49:13 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 17:27:44 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) :  Form("ShrubberyCreationForm", 145, 137, "asd")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form("ShrubberyCreationForm", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &src ) : Form(src)
{
	return ;
}

void	ShrubberyCreationForm::action( void ) const
{
	std::ofstream outf(getTarget());
    if (!outf)
	{
		std::cout << "This file could not be opened for writing" << std::endl;
		return ;
	}
	outf << "       *" << std::endl;
	outf << "      ***" << std::endl;
	outf << "     ******" << std::endl;
	outf << "    ********" << std::endl;
	outf << "   **********" << std::endl;
	outf << "       **" << std::endl;
	outf << "       **" << std::endl;
	outf << "       **" << std::endl;
	outf << std::endl;
	outf << "       *" << std::endl;
	outf << "      ***" << std::endl;
	outf << "     ******" << std::endl;
	outf << "    ********" << std::endl;
	outf << "   **********" << std::endl;
	outf << "       **" << std::endl;
	outf << "       **" << std::endl;
	outf << "       **" << std::endl;
	outf.close();
	
}


Form*	ShrubberyCreationForm:: clone(std::string const &target) const
{
	Form *nform = new ShrubberyCreationForm(target);
	return (nform);
}

Form*	ShrubberyCreationForm:: clone() const
{
	Form *nform = new ShrubberyCreationForm(*this);
	return (nform);
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & )
{
	return (*this);
}
