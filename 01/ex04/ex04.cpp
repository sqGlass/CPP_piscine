/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:19:42 by sglass            #+#    #+#             */
/*   Updated: 2021/04/13 11:06:29 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>

int main()
{
    std::string     str = "HI THIS IS BRAIN";
    
    std::string*    pstr = &str;
    std::string&    rstr = str;
    std::cout << *pstr << std::endl;
    std::cout << rstr << std::endl;
    
    return (0);
}