/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 12:34:57 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 13:09:12 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{	
    public:

		PresidentialPardonForm(std::string const & target);
		~PresidentialPardonForm( void );
		PresidentialPardonForm( PresidentialPardonForm const &src );


	private:

		virtual void action( void ) const;
		PresidentialPardonForm( void );
		PresidentialPardonForm&	operator=( PresidentialPardonForm const &rhs );
};


#endif