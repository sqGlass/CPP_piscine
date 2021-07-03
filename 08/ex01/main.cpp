/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:07:38 by sglass            #+#    #+#             */
/*   Updated: 2021/05/05 18:47:50 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip> 
#include <math.h> 
#include <exception>
#include "span.hpp"
#include <vector>
#include <list>



int main()
{
	try
	{
		///////////////////sub main/////////////////
		
		// span sp = span(5);
		// sp.addNumber(5);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;

		////////////////////////////exceptions/////////////////////////////
		// span sp = span(50);
		// for (int i = 0; i < 60; i++)
		// 	sp.addNumber(i);

		// for (int i = 0; i < 1; i++)
		// 	sp.addNumber(i);
		// sp.shortestSpan();
	
		///////////////////////////betterNum////////////////////////
		span sp = span(1000);
		std::vector<int> f;
		for(int i = 0; i < 1000; i++)
			f.push_back(i * 7);
		sp.betterAddN< std::vector<int> >(f.begin(), f.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
