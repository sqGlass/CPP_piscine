/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 19:44:10 by sglass            #+#    #+#             */
/*   Updated: 2021/04/12 13:54:57 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>
# include <sstream>

class Brain
{

private:

    std::string addr;


public:

    Brain ( void );
    ~Brain ( void );

    std::string identify( void ) const;
};

#endif