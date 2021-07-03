/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 19:01:42 by sglass            #+#    #+#             */
/*   Updated: 2021/04/19 12:18:31 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <string>
#include <iostream>
#include <sstream>

class ScavTrap
{
    public:

	ScavTrap( void );
	ScavTrap( std::string const &name );
	~ScavTrap( void );
	ScavTrap( ScavTrap const &src );


	ScavTrap&	operator=( ScavTrap const &rhs );

	int		rangedAttack( std::string const &target );
	int		meleeAttack( std::string const &target) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount);

	int		get_HP( void );
	int		get_energy( void );
	std::string	getName( void ) const;

    void	challengeNewcomer( std::string const & target );



private:

	int _hit_points;
	int _max_hit_points;
	int _energy_points;
	int _max_energy_points;
	int _level;
	std::string _name;
	int _melee_atack_damage;
	int _ranged_attack_damage;
	int _armor_dmg_reduct;
};

#endif