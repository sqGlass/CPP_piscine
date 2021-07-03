/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:52:34 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 10:33:07 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define  CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class	Contact{

private:

	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

public:

	int		add_contact( void );
	void	print_main_info( void );
	void	cut_string( std::string str, int flag_last );
	void	write_information( void );
	
	Contact( void );
	~Contact( void );
};

#endif