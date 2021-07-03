/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:09:21 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 10:31:24 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

int		Contact::add_contact( void )
{
	while (this->first_name == "\0")
	{
		std::cout << "enter first name" << std::endl;
		if ((std::getline(std::cin, this->first_name)) == 0)
			return (1);
		if (this->first_name == "\0")
			std::cout << "Empty input. Write name, please!" << std::endl;
	}
	std::cout << "enter last name" << std::endl;
	if ((std::getline(std::cin, this->last_name)) == 0)
		return (1);
	std::cout << "enter nickname" << std::endl;
	if ((std::getline(std::cin, this->nickname)) == 0)
		return (1);
	std::cout << "enter login" << std::endl;
	if ((std::getline(std::cin, this->login)) == 0)
		return (1);
	std::cout << "enter postal address" << std::endl;
	if ((std::getline(std::cin, this->postal_address)) == 0)
		return (1);
	std::cout << "enter email address" << std::endl;
	if ((std::getline(std::cin, this->email_address)) == 0)
		return (1);
	std::cout << "enter phone number" << std::endl;
	if ((std::getline(std::cin, this->phone_number)) == 0)
		return (1);
	std::cout << "enter birthday date" << std::endl;
	if ((std::getline(std::cin, this->birthday_date)) == 0)
		return (1);
	std::cout << "enter favorite meal" << std::endl;
	if ((std::getline(std::cin, this->favorite_meal)) == 0)
		return (1);
	std::cout << "emm.. enter your underwear color, pls))" << std::endl;
	if ((std::getline(std::cin, this->underwear_color)) == 0)
		return (1);
	std::cout << "enter darkest secret" << std::endl;
	if ((std::getline(std::cin, this->darkest_secret)) == 0)
		return (1);
	std::cout << "Contact successfully created!" << std::endl;
	return (0);
}

void	Contact::print_main_info( void )
{
	if (this->first_name.size() <= 10)
		std::cout << std::setw(10) << this->first_name << "|";
	else
		cut_string(this->first_name, 0);
	if (this->last_name.size() <= 10)
		std::cout << std::setw(10) << this->last_name << "|";
	else
		cut_string(this->last_name, 0);
	if (this->nickname.size() <= 10)
		std::cout << std::setw(10) << this->nickname;
	else
		cut_string(this->nickname, 1);
	std::cout << std::endl;
}

void	Contact::cut_string( std::string str, int flag_last )
{
	for (int i = 0; i < 9; i++)
		std::cout << str[i];
	std::cout << ".";
	if (flag_last == 0)
		std::cout << "|";
}

void	Contact::write_information( void )
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal address: " << this->postal_address << std::endl;
	std::cout << "Email address: " << this->email_address << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Birthday date: " << this->birthday_date << std::endl;
	std::cout << "Email address: " << this->email_address << std::endl;
	std::cout << "Favorite meal: " << this->favorite_meal << std::endl;
	std::cout << "Underwear color: " << this->underwear_color << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}
