/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:15:59 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 12:02:19 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
class Form;
#include "Form.hpp"

class Bureaucrat
{	
    public:

		Bureaucrat( std::string const &name, int grage);
		~Bureaucrat( void );
		Bureaucrat( Bureaucrat const &src );

		std::string	const &getName( void ) const;
		int		getGrade( void ) const;	
		void	incrementGrade( void );
		void	decrementGrade( void );
		void	signForm( Form &form );
		void	executeForm(Form const & form);

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

		std::string const	_name;
		int					_grade;
		Bureaucrat( void );
		Bureaucrat&	operator=( Bureaucrat const &rhs );
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &bureaucrat);




#endif