/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:09:15 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 19:16:50 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Zombie.hpp"

class ZombieEvent
{
    
private:

    std::string type;

public:

    void    setZombieType( std::string type );
    Zombie* newZombie(std::string name);
    

    ZombieEvent( void );
    ~ZombieEvent( void );
};

#endif