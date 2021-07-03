/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:12:20 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 18:41:56 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *nb = NULL;
	try
	{
		nb = new Bureaucrat("asd", 2);
		std::cout << *nb;
		
	}
	catch (std::exception &exep)
	{
		delete nb;
		std::cerr << exep.what() << std::endl;
	}

//////////////////////////////////////////////////////////////////149
	// try
	// {
	// 	nb->decrementGrade();
	// 	std::cout << nb->getGrade() << std::endl;
	// 	nb->decrementGrade();
	// 	std::cout << nb->getGrade() << std::endl;
	// 	std::cout << "I WILL NOT BE HERE!" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	delete nb;
	// 	std::cerr << e.what() << std::endl;
	// }

/////////////////////////////////////////////////////////////////2

	// try
	// {
	// 	nb->incrementGrade();
	// 	std::cout << nb->getGrade() << std::endl;
	// 	nb->incrementGrade();
	// 	std::cout << nb->getGrade() << std::endl;
	// 	std::cout << "I WILL NOT BE HERE!" << std::endl;
	// }
	// catch(const std::exception& e)
	// {
	// 	delete nb;
	// 	std::cerr << e.what() << std::endl;
	// }

}