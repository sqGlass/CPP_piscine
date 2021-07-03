/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 20:25:55 by sglass            #+#    #+#             */
/*   Updated: 2021/04/30 19:01:39 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	test1Shrubbery()
{
	try
	{
		std::string target("Home");
		Bureaucrat bob("Bob The Mighty", 1);
		ShrubberyCreationForm shrub(target);
		shrub.beSigned(bob);
		std::cout << shrub  << std::endl;
		shrub.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
void	test2Shrubbery()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 1);
		ShrubberyCreationForm shrub(target);
		shrub.beSigned(bob);
		std::cout << shrub  << std::endl;
		bob.executeForm(shrub);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
void	test1Robotomy()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 72);
		RobotomyRequestForm robo(target);
		robo.beSigned(bob);
		std::cout << robo  << std::endl;
		bob.executeForm(robo);
		robo.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}
void	test2Robotomy()
{
	try
	{
		std::string target("Hola");
		Bureaucrat bob("Bob The Mighty", 1);
		RobotomyRequestForm robo(target);
		robo.beSigned(bob);
		std::cout << robo  << std::endl;
		bob.executeForm(robo);
		robo.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}
void	test1Presidental()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 1);
		PresidentialPardonForm pres(target);
		pres.beSigned(bob);
		std::cout << pres  << std::endl;
		bob.executeForm(pres);
		pres.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}
void	test2Presidental()
{
	try
	{
		std::string target("supermarket");
		Bureaucrat bob("Bob The Mighty", 25);
		PresidentialPardonForm pres(target);
		pres.beSigned(bob);
		std::cout << pres  << std::endl;
		bob.executeForm(pres);
		pres.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cerr << "EXCEPTION HAS BEEN CAUGHT: "<< e.what() << '\n';
	}
}
int	main()
{
	std::srand(time(NULL));
	test1Shrubbery();
	test2Shrubbery();
	// test1Robotomy();
	// test2Robotomy();
	// test1Presidental();
	// test2Presidental();
	// while(1);
	return (0);
}

// int main()
// {
// 	std::srand(time(NULL));
// 	try
//     {
// 		Bureaucrat bur("Andr", 1);
// 		ShrubberyCreationForm sf("asd");
// 		RobotomyRequestForm da("roborobo");
		
// 		PresidentialPardonForm la("Navalniy");

// 		bur.signForm(la);
// 		bur.executeForm(la);
// 		// sf.execute(bur);
// 		// sf.action();
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// 	return (0);
// }