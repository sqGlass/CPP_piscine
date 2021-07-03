/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:11:57 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 16:25:19 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{	
    public:

		RobotomyRequestForm(std::string const & target);
		~RobotomyRequestForm( void );
		RobotomyRequestForm( RobotomyRequestForm const &src );
		virtual Form* clone(std::string const &target) const;
		virtual Form* clone() const;

	private:

		virtual void action( void ) const;
		RobotomyRequestForm( void );
		RobotomyRequestForm&	operator=( RobotomyRequestForm const &rhs );
};


#endif