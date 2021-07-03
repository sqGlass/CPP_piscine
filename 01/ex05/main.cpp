/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:00:41 by sglass            #+#    #+#             */
/*   Updated: 2021/04/13 11:21:59 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
	Human h;
	std::cout << h.identify() << std::endl;
	std::cout <<h.getBrain().identify() << std::endl;
	return (0);
}