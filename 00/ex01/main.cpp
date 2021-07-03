/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:25:39 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 10:33:12 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

int	concrete_contact(Contact *contacts, int count)
{
	int index;
	while (1)
	{
		std::cout << "Enter the index of contact, to know more" << std::endl;
		if (count == 1)
				std::cout << "Available value is 0" << std::endl;
		else
		{
			std::cout << "Available values from 0 to ";
			std::cout << count - 1<< std::endl;
		}
		std::cin >> index;
		if (std::cin.eof())
			return (1);
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767,'\n');
			if (count == 1)
				std::cout << "Incorrect index, available value is 0" << std::endl;
			else
			{
				std::cout << "Incorrect index, available values from 0 to ";
				std::cout << count - 1 << std::endl;
			}
		}
		else if (index < 0 || index > count - 1)
		{
			if (count == 1)
				std::cout << "Incorrect index, available value is 0" << std::endl;
			else
			{
				std::cout << "Incorrect index, available values from 0 to ";
				std::cout << count - 1 << std::endl;
			}
		}
		else
		{
			contacts[index].write_information();
			std::cin.ignore();
			return (0);
		}
	}
	return (0);
}

int	search_contact(Contact *contacts, int count)
{
	int i;
	int index;
	i = 0;

	if (count == 0)
		std::cout << "No one contact there" << std::endl;
	else
	{
		std::cout << std::setw(10) << "index" << "|" << std::setw(10) << "first name" << "|" << std::setw(10) << "last name" << "|" << std::setw(10) << "nickname" << std::endl;
		while (i < count)
		{
			std::cout << std::setw(10) << i << "|";
			contacts[i].print_main_info();
			i++;
		}
		if ((concrete_contact(contacts, count)) == 1)
			return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	Contact contacts[8];
	std::string user_inp;
	int count;

	count = 0;
	std::cout << "Hello, it is PhoneBook!" << std::endl;
	std::cout << "You could use the ADD command, the SEARCH command or the EXIT command." << std::endl;
	while (getline(std::cin, user_inp))
	{
		if (user_inp == "EXIT")
		{
			std::cout << "Bye!" << std::endl;
			return (0);
		}
		else if (user_inp == "ADD")
		{
			if (count <= 7)
			{
				if ((contacts[count].add_contact()) == 1)
					return (1);
				count++;
			}
			else
				 std::cout << "Phone book is full!" << std::endl;
		}
		else if (user_inp == "SEARCH")
		{
			if ((search_contact(contacts, count)) == 1)
				return (1);
		}
		else
			std::cout << "Wrong command!" << std::endl;
		std::cout << "You could use the ADD command, the SEARCH command or the EXIT command." << std::endl;
	}
	return (0);
}
