/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 18:22:04 by sglass            #+#    #+#             */
/*   Updated: 2021/04/12 20:15:24 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{

private:

	std::string name;
	Weapon &weap;


public:



	HumanA( std::string, Weapon& );
	~HumanA( void ); 

	void	attack( void );
};

#endif

