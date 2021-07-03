/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 13:59:04 by sglass            #+#    #+#             */
/*   Updated: 2021/05/01 22:58:58 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include "Scholar.hpp"

int main(int argc, char **argv)
{
	int code;
	std::string stroka;
	if (argc != 2)
	{
		std::cout << "Wrong argument!" << std::endl;
		return (1);
	}
	stroka = argv[1];
	if (stroka.compare("") == 0)
	{
		std::cout << "Empty string" << std::endl;
		return (1);
	}
	Scholar *sc = new Scholar(stroka);
	try
	{
		code = sc->parser();
		sc->convert(code);
		sc->output();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete sc;
}