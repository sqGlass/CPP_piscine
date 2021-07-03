/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:18:48 by sglass            #+#    #+#             */
/*   Updated: 2021/05/05 18:45:25 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "easyfind.hpp"
#include <array>

int main()
{
	try
	{
		std::array<int, 7> a = {14, 14, 123, 213423, 0, 112, 2};
		int *f = easyfind< std::array<int, 7> >(a, 2);
		std::cout << *f << std::endl;
		f = easyfind< std::array<int, 7> >(a, 333);
		std::cout << *f << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}