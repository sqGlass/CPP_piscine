/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:14:58 by sglass            #+#    #+#             */
/*   Updated: 2021/04/19 15:57:22 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>
#include <sstream>

class ClapTrap
{

public:

	ClapTrap( int energy_points, int max_energy_points, std::string _name, int _melee_atack_damage, int _ranged_attack_damage, int _armor_dmg_reduct);
	ClapTrap( void );
	ClapTrap( std::string const &name );
	~ClapTrap( void );
	ClapTrap( ClapTrap const &src );


	ClapTrap&	operator=( ClapTrap const &rhs );

	int		rangedAttack( std::string const &target );
	int		meleeAttack( std::string const &target) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount);

	int		get_HP( void );
	int		get_energy( void );
	std::string	getName( void ) const;

	
	// int		get_range_dmg( void );
	// int		get_melee_dmg( void );
	// int		get_armor_reduct( void );

	// void	set_HP( int hp );
	// void	set_energy( int energy );
	// void	set_range_dmg( int rng_dmg );
	// void	set_melee_dmg( int melee_dmg );
	// void	set_armor_reduct( int arm_red );
	// void	set_name( std::string const &name );



protected:
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