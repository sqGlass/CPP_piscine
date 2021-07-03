/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:14:58 by sglass            #+#    #+#             */
/*   Updated: 2021/04/20 16:17:25 by sglass           ###   ########.fr       */
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

	ClapTrap( int hp, int maxHP, int energy_points, int max_energy_points, std::string _name, int _melee_atack_damage, int _ranged_attack_damage, int _armor_dmg_reduct);
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