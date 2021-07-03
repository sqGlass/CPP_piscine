/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 13:52:43 by sglass            #+#    #+#             */
/*   Updated: 2021/04/12 18:43:48 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class Weapon
{

private:

    std::string type;
    

public:

    Weapon ( std::string );
    ~Weapon ( void );

    const std::string &getType ( void );
    void    setType( std::string type );
};

#endif