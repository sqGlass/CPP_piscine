/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 15:49:46 by sglass            #+#    #+#             */
/*   Updated: 2021/04/19 15:52:07 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include <iostream>
#include <sstream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:

	ScavTrap( void );
	ScavTrap( std::string const &name );
	~ScavTrap( void );
	ScavTrap( ScavTrap const &src );

	ScavTrap&	operator=( ScavTrap const &rhs );

    void	challengeNewcomer( std::string const & target );

	int		rangedAttack( std::string const &target );
	int		meleeAttack( std::string const &target) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount);

};

#endif