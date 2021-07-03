/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 20:17:47 by sglass            #+#    #+#             */
/*   Updated: 2021/04/12 20:25:57 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B
# define HUMAN_B

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{

private:

	std::string name;
	Weapon *weap;


public:



	HumanB( std::string );
	~HumanB( void ); 

	void	attack( void );
	void	setWeapon( Weapon & );
};

#endif