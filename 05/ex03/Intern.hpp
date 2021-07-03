/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:55:56 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 17:29:41 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_H
#define INTERN_H

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{	
    public:

		Intern( void );
		~Intern( void );
		Intern&	operator=( Intern const &rhs );
		Intern( Intern const &src );

		Form*	makeForm(std::string const &name, std::string const &target);

	private:
		Form*	_forms[3];
		std::string _name;
		std::string _target;
};

#endif
