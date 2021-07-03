/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:40:17 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 16:40:03 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef NINJATRAP_H
#define NINJATRAP_H

#include <string>
#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap: public ClapTrap
{
    public:

	NinjaTrap( void );
	NinjaTrap( std::string const &name );
	~NinjaTrap( void );
	NinjaTrap( NinjaTrap const &src );

	NinjaTrap&	operator=( NinjaTrap const &rhs );

	int		rangedAttack( std::string const &target );
	int		meleeAttack( std::string const &target) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount);

	void	ninjaShoebox( FragTrap &target );
	void	ninjaShoebox( ScavTrap &target );
	void	ninjaShoebox( ClapTrap &target );
	void	ninjaShoebox( NinjaTrap &target );
};

#endif