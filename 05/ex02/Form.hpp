/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:25:02 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 13:15:38 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_H
#define FORM_H

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{	
    public:

		Form( std::string const &name, int gradeSign, int gradeExec, std::string const &target);
		virtual ~Form( void );
		Form( Form const &src );
		std::string	const &getName( void ) const;
		std::string	const &getTarget( void ) const;
		int	getGradeSign( void ) const;
		int getGradeExec( void ) const;
		bool getIsSigned( void ) const;

		void	beSigned(Bureaucrat &beur);
		void	execute(Bureaucrat const & executor) const;
		virtual void action( void ) const = 0;
		class GradeTooHighException : public std::exception
		{	
   			public:

				virtual	const char* what() const throw();
	
		};

		class GradeTooLowException : public std::exception
		{	
			public:

				virtual	const char* what() const throw();
		
		};

	private:

		bool				_isSigned;
		std::string const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
		std::string	const	_target;

		Form( void );
		Form&	operator=( Form const &rhs );
};

std::ostream& operator<<(std::ostream &out, Form const &form);

#endif