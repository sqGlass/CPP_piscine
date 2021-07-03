/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:30:24 by sglass            #+#    #+#             */
/*   Updated: 2021/04/13 12:00:36 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::string filename;
    std::string s1;
    std::string s2;

    if (argc != 4)
        return (1);
    filename = argv[1];
    s1 = argv[2];
    s2 = argv[3];
    if (s1.compare("\0") == 0 || s2.compare("\0") == 0)
        return (1);
    std::ifstream inf(filename);
    if (!inf)
    {
        std::cout << "This file could not be opened for reading" << std::endl;
        return (1);
    }
    std::ofstream outf(filename + ".replace");
    if (!outf)
	{
	
		std::cout << "This file could not be opened for writing" << std::endl;
		return (1);
	}
    size_t pos;
    std::string strInp;
    while (std::getline(inf, strInp) != 0)
    {
        while ((pos = strInp.find(s1)) < strInp.length())
        {
            strInp.replace(pos, s1.length(), s2);
        }
        outf << strInp << std::endl;
    }
}