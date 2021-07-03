/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:49:02 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 13:18:28 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{	
    public:

		ShrubberyCreationForm(std::string const & target);
		~ShrubberyCreationForm( void );
		ShrubberyCreationForm( ShrubberyCreationForm const &src );


	private:

		virtual void action( void ) const;
		ShrubberyCreationForm( void );
		ShrubberyCreationForm&	operator=( ShrubberyCreationForm const &rhs );
};


#endif