/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:19:50 by sglass            #+#    #+#             */
/*   Updated: 2021/05/04 19:40:18 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "iter.hpp"

class Awesome
{
	public:
		Awesome(void): _n(42)
		{
			return;
		}
		int get(void) const
		{
			return this->_n;
		}
	private:
		int _n;
};

std::ostream & operator<<(std::ostream & o, Awesome const & rhs)
{
	o << rhs.get();
	return (o);
}

template <typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
}

void	plus1(int const &a)
{
	int i;

	i = 0;
	std::cout << a << std::endl;
}

int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	
	iter(tab, 5, plus1);

	iter(tab, 5, print);
	iter(tab2, 5, print);

}