/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 14:11:37 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 19:35:30 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	protected:
	enum Constants {
		Hit_Points = 100,
		Max_hp = 100,
		Range_att = 20,
		Arm_red = 5
	};

public:

	FragTrap( void );
	FragTrap( std::string const &name );
	~FragTrap( void );
	FragTrap( FragTrap const &src );

	FragTrap&	operator=( FragTrap const &rhs );

	int		vaulthunter_dot_exe(std::string const & target);

	int		rangedAttack( std::string const &target );
	int		meleeAttack( std::string const &target) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount);
	
};

#endif