/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dynamic.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:01:14 by sglass            #+#    #+#             */
/*   Updated: 2021/05/03 13:12:19 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

class Base
{	
    public:
		virtual ~Base( void ){}
		
};

class A : public Base
{	

};

class B : public Base
{

};

class C : public Base
{

};

Base * generate(void)
{
	int r;
	
	Base *base;
	r = rand() % 3;
	if (r == 0)
	{
		base = new A();
		std::cout << "psss A created!" << std::endl;
	}
	if (r == 1)
	{
		base = new B;
		std::cout << "psss B created!" << std::endl;
	}
	if (r == 2)
	{
		base = new C;
		std::cout << "psss C created!" << std::endl;
	}
	return (base);
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	delete p;
}

void identify_from_reference( Base & p)
{
	try
	{
			(void)dynamic_cast<A&>(p);
			std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(const std::exception& e)
			{

			}
		}
	}
	delete &p;
}

int main()
{
	std::srand(time(NULL));
	identify_from_pointer(generate());
	identify_from_reference(*generate());
}