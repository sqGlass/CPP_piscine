/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:59:15 by sglass            #+#    #+#             */
/*   Updated: 2021/05/04 19:41:44 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include "Array.hpp"

class Awesome
{
private:
	int	_n;
public:
	Awesome() {
		_n = rand() % 1000;
	}
	~Awesome() {}
	int     getn() {
		return (this->_n);
	}

};
std::ostream &operator << (std::ostream &out, Awesome &obj)
{
	out << obj.getn();
	return (out);
}


int main()
{

    //create and show intArray
    Array<int> intArray(10);
    for(int i = 0; i < 10; i++)
        intArray[i] = i * 2;
    for(int i = 0; i < 10; i++)
        std::cout << "intArray[" << i << "] == " << intArray[i] << std::endl;

    std::cout << std::endl;

    //assign 
    Array<int> assign;
    assign = intArray;
    for(int i = 0; i < 10; i++)
        std::cout << "assign[" << i << "] == " << assign[i] << std::endl;

    std::cout << std::endl;

    // not change
    for(int i = 0; i < 10; i++)
    {
        intArray[i] = i * 10;
        std::cout << "intArray[" << i << "] == " << intArray[i] << std::endl;
    }

    for(int i = 0; i < 10; i++)
    {
        std::cout << "assign[" << i << "] == " << assign[i] << std::endl;
    }

    std::cout << std::endl;


    //exception
    try
    {
		intArray[100] = 33;
		std::cout << intArray[1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;

    //class test

    Array<Awesome> awe(10);
    for(int i = 0; i < 10; i++)
        std::cout << "awe[" << i << "] == " << awe[i] << std::endl;

}


