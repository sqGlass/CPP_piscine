/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:24:55 by sglass            #+#    #+#             */
/*   Updated: 2021/04/29 19:56:34 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ) : _gradeSign(42), _gradeExec(42)
{
	return ;
}

Form::Form( std::string const &name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	_isSigned = false;
	if (_name.compare("\0") == 0)
		throw(std::invalid_argument("no name"));
	if (_gradeSign > 150 || _gradeExec > 150)
		throw(Form::GradeTooLowException());
	if (_gradeSign < 1 || _gradeExec < 1)
		throw(Form::GradeTooHighException());
	std::cout << "Form is created" << std::endl;
	return ;
}

Form::~Form( void )
{
	std::cout << "Form is destroyed" << std::endl;
	return ;
}

Form::Form( Form const &src ) :  _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	_isSigned = false;   // надо ли фолс
	if (_name.compare("\0") == 0)
		throw(std::invalid_argument("no name"));
	if (_gradeSign > 150 || _gradeExec > 150)
		throw(Form::GradeTooLowException());
	if (_gradeSign < 1 || _gradeExec < 1)
		throw(Form::GradeTooHighException());
	std::cout << "Form is created" << std::endl;
	return ;
}



Form&	Form::operator=( Form const & )
{
	return (*this);
}

std::string	const	&Form::getName() const
{
	return (_name);
}
int	Form::getGradeSign( void ) const
{
	return (_gradeSign);
}

int Form::getGradeExec( void ) const
{
	return (_gradeExec);
}

bool Form::getIsSigned( void ) const
{
	return (_isSigned);
}

void	Form::beSigned(Bureaucrat &beur)
{
	if (beur.getGrade() <= _gradeSign && !_isSigned)
		_isSigned = true;
	if (beur.getGrade() > _gradeSign)
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, Form const &form)
{
	out << "Form - \"" << form.getName() << "\", grade to sign it - " << form.getGradeSign() << ", grade to execute it - " << form.getGradeExec() << std::endl;
	
	return (out);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("too low");
}
