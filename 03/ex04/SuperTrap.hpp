/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:49:35 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 19:36:31 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <string>
#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: public NinjaTrap, public FragTrap
{
	protected:
	enum Constants {
		Hit_Points = FragTrap::Hit_Points,
		Max_hp = FragTrap::Max_hp,
		Range_att = FragTrap::Range_att,
		Arm_red = FragTrap::Arm_red,
		En_p = NinjaTrap::Energy_points,
		Max_energy = NinjaTrap::Max_energy,
		Melee = NinjaTrap::Melee,

		
	};

    public:

	SuperTrap( void );
	SuperTrap( std::string const &name );
	~SuperTrap( void );
	SuperTrap( SuperTrap const &src );

	SuperTrap&	operator=( SuperTrap const &rhs );


	int		rangedAttack( std::string const &target );
	int		meleeAttack( std::string const &target) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount);

};

#endif