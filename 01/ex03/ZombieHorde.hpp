/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:44:45 by sglass            #+#    #+#             */
/*   Updated: 2021/04/09 13:58:11 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <string>
# include <iostream>
# include <iomanip>
# include "Zombie.hpp"

class ZombieHorde
{

private:

	int n;
	Zombie *nZombie;

public:

	void   announce( void );

	ZombieHorde( int n );
	~ZombieHorde ( void );
};

#endif