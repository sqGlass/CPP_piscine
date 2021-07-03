/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:43:58 by sglass            #+#    #+#             */
/*   Updated: 2021/04/13 11:15:03 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
    
    return ;
}

Brain::~Brain( void )
{
    std::cout << "Brain dead!" << std::endl;
    return ;
}

std::string Brain::identify( void ) const
{
    // const void * address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << this;
    std::string name = ss.str();
    return (name);
    
}
