/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 14:56:05 by sglass            #+#    #+#             */
/*   Updated: 2021/05/04 19:25:47 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ARRAY_H
#define ARRAY_H

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip> 

template<class T>
class Array
{	
    public:
		Array(void)
		{
			_arr_length = 0;
			arr = 0;
		}
		Array (unsigned int arr_length) 
		{
			if (arr_length == 0)
				throw std::out_of_range("cannot be zero");
			_arr_length = arr_length;
			arr = new T[arr_length];
			
		}
		~Array( void )
		{
			delete[] arr;
		}
		Array&	operator=( Array const &rhs )
		{
			if (this == &rhs)
				return (*this);
			delete[] arr;

			arr = new T[rhs._arr_length];
			for (unsigned int i = 0; i < rhs._arr_length; i++)
			{
				arr[i] = rhs.arr[i];
			}
			_arr_length = rhs._arr_length;
			return *this;
			
		}
		Array( Array const &src )
		{
			arr = new T[src._arr_length];
			for (unsigned int i = 0; i < src._arr_length; i++)
			{
				arr[i] = src.arr[i];
			}
			_arr_length = src._arr_length;
		}
		
		T& operator[](unsigned int index)
    	{
			if (index < 0 || index >= _arr_length)
				throw std::out_of_range("out of range");
			return arr[index];	
    	}

		const T& operator[] (const unsigned int index) const
		{
			if (index < 0 || index >= _arr_length)
				throw std::out_of_range("out of range");
			return arr[index];
		}
		

		unsigned int size()
		{
			return (_arr_length);
		}

	private:
	
		unsigned int _arr_length;
		T *arr;
	
};

#endif