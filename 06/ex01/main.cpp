/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 23:51:53 by sglass            #+#    #+#             */
/*   Updated: 2021/05/03 11:11:13 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>

typedef struct	s_Data
{
	std::string str1;
	std::string str2;
	int			n;
	
}				Data;

void *serialize(void)
{
	char* str1 = new char[15];
	char* str2 = new char[15];
	void* ptr = new char[20];
	void* old;
	old = ptr;
	int	n = 0;
	int i = 0;

	std::string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*";
	while (i < 14)
	{
		str1[i] = all[rand() % 70];
		str2[i] = all[rand() % 70];
		i++;
	}
	str1[i] = '\0';
	str2[i] = '\0';
	n = rand() % 1000;
	std::cout << str1 << std::endl;
	std::cout << n << std::endl;
	std::cout << str2 << std::endl;
	std::cout << std::endl;


	*reinterpret_cast<char **> (ptr) = str1;
	ptr = (char **)ptr + 1;
	*reinterpret_cast<int *> (ptr) = n;
    ptr = (int *)ptr + 1;
    *reinterpret_cast<char **> (ptr) = str2;

	return (old);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->str1 = std::string(*reinterpret_cast<char**>(raw), 14);
	data->n = *(reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + sizeof(char *)));
	data->str2 = std::string(*(char**)(reinterpret_cast<char*>(raw) + (sizeof(char*) + sizeof(int))), 14);
	return (data);
}

int main()
{
	std::srand(time(NULL));
	Data *data = deserialize(serialize());
	
	std::cout << data->str1 << std::endl;
	std::cout << data->n << std::endl;
	std::cout << data->str2 << std::endl;

	delete data;
	
}