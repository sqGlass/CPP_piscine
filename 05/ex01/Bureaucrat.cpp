/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:16:02 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 11:49:37 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat( std::string const &name, int grade) : _name(name)
{
	if (_name.compare("\0") == 0)
		throw(std::invalid_argument("no name"));
	if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	_grade = grade;
	std::cout << "Bureaucrat is created" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat is destroyed" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const &src ) : _name(src._name)
{
	if (_name.compare("\0") == 0)
		throw(std::invalid_argument("no name"));
	if (_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	if (_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	_grade = src._grade;
	return ;
}



Bureaucrat&	Bureaucrat::operator=( Bureaucrat const & )
{
	return (*this);
}

std::string	const	&Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade( void )
{
	if (_grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	_grade = _grade - 1;
}

void	Bureaucrat::decrementGrade( void )
{
	if (_grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	_grade = _grade + 1;
}

void Bureaucrat::signForm( Form &form )
{
	if (_grade > form.getGradeSign())
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because level is too low" << std::endl;
		// form.beSigned(*this);
		return ;
	}

	if (form.getIsSigned())
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because form has already been signed!" << std::endl;
		return ;
	}

	else
	{
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
		form.beSigned(*this);
	}

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("too low");
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out <<  bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	
	return (out);
}
