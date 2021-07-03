/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 23:25:30 by sglass            #+#    #+#             */
/*   Updated: 2021/05/04 19:20:58 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "whatever.hpp"


class Awesome
{	
    public:

		Awesome( int n): _n(n){}
		bool operator==( Awesome const &rhs) const
		{
			return (this->_n == rhs._n);
		}
		bool operator!=( Awesome const &rhs) const
		{
			return (this->_n != rhs._n);
		}
		bool operator>( Awesome const &rhs) const
		{
			return (this->_n > rhs._n);
		}
		bool operator<( Awesome const &rhs) const
		{
			return (this->_n < rhs._n);
		}
		bool operator>=( Awesome const &rhs) const
		{
			return (this->_n >= rhs._n);
		}
		bool operator<=( Awesome const &rhs) const
		{
			return (this->_n <= rhs._n);
		}

		int _n;
	private:
	
	
};

std::ostream & operator<<(std::ostream & os, Awesome Awesome)
{
	std::cout << Awesome._n;
	return os;
}


int main()
{
	Awesome awes1(21);
	Awesome awes2(42);

	Awesome *point1 = new Awesome(33);
	Awesome *point2 = new Awesome(34);
	
	int a;
	int a2;
	double d;
	double d2;
	float f;
	float f2;
	char c;
	char c2;

	std::cout << "<<<<<<<<<<<<<<<<<<<<MAX<<<<<<<<<" <<std::endl;

	a = max(5, 7);
	std::cout << a << std::endl;
	d = max (5.2, 10.1);
	std::cout << d << std::endl;
	f = max(24.0f, 10.22f);
	std::cout << f << std::endl;
	c = max('k', 'b');
	std::cout << c << std::endl;

	
	std::cout << "max(awes1, awes2) " << max(awes1, awes2) << std::endl;

	std::cout << "max(point1, point2) " << max(*point1, *point2) << std::endl;

	std::cout << "<<<<<<<<<<<<<<<<<<<<MIN<<<<<<<<<" <<std::endl;

	a = min(5, 7);
	std::cout << a << std::endl;
	d = min (5.2, 10.1);
	std::cout << d << std::endl;
	f = min(24.0f, 10.22f);
	std::cout << f << std::endl;
	c = min('k', 'b');
	std::cout << c << std::endl;

	std::cout << "min(awes1, awes2) " << min(awes1, awes2) << std::endl;

	std::cout << "min(*point1, *point2) " << min(*point1, *point2) << std::endl;


	
	std::cout << "<<<<<<<<<<<<<<<<<<<<SWAP<<<<<<<<<" <<std::endl;
	a = 12;
	a2 = 15;
	swap(a, a2);
	std::cout << "a = " << a << ", a2 = " << a2 << std::endl;
	
	d = 19.8;
	d2 = 10.0;
	swap(d, d2);
	std::cout << "d = " << d << ", d2 = " << d2 << std::endl;
	
	f = 124.98f;
	f2 = 500.05f;
	swap(f, f2);
	std::cout << "f = " << f << ", f2 = " << f2 << std::endl;

	c = 'j';
	c2 = '*';
	swap(c, c2);
	std::cout << "c = " << c << ", c2 = " << c2 << std::endl;

	swap(awes1, awes2);
	std::cout << "swap(awes1, awes2) " << "awes 1 = " << awes1 << " awes2 = " << awes2 << std::endl;

	swap(*point1, *point2);
	std::cout << "swap(point1, point2) " << "point 1 = " << *point1 << " point2 = " << *point2 << std::endl;

	
}