/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:11:13 by mlorette          #+#    #+#             */
/*   Updated: 2021/05/05 18:54:22 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include "mutantstack.cpp"
#include <stack>
#include <iostream>


int main()
{
	///////////////def

	mutantstack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mutantstack<int>::iterator it = mstack.begin();
	mutantstack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	//////////////////////////////////

	// std::cout << "\nCHECKING 10 OBJS...\n";
	// mutantstack<int> mstack;
	// for (int i = 0; i < 10; i++)
	// 	mstack.push(i + 1);
	// mutantstack<int>::iterator it = mstack.begin();
	// mutantstack<int>::iterator ite = mstack.end();
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::cout << "\nCHECKING ASSIGNMENT...\n";
	// mutantstack<int> s;
	// s = mstack;
	// it = s.begin();
	// ite = s.end();
	// while (it != ite)
	// {
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::cout << "\nCHECKING CHANGE OF OBJECT THROUGH ITERATOR...\n";
	// it = mstack.begin();
	// ite = mstack.end();
	// while (it != ite)
	// {
	// 	*it += 10;
	// 	std::cout << *it << std::endl;
	// 	++it;
	// }
	// std::cout << mstack.top() << std::endl;
	return 0;
}