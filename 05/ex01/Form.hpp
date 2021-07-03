/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 13:25:02 by sglass            #+#    #+#             */
/*   Updated: 2021/04/29 16:20:23 by sglass           ###   ########.fr       */
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

		Form( std::string const &name, int gradeSign, int gradeExec);
		~Form( void );
		Form( Form const &src );
		std::string	const &getName( void ) const;
		int	getGradeSign( void ) const;
		int getGradeExec( void ) const;
		bool getIsSigned( void ) const;

		void	beSigned(Bureaucrat &beur);
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

		Form( void );
		Form&	operator=( Form const &rhs );
};

std::ostream& operator<<(std::ostream &out, Form const &form);

#endif