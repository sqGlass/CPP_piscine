/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:33:42 by sglass            #+#    #+#             */
/*   Updated: 2021/04/18 15:30:46 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <string>
#include <iostream>
#include <sstream>

class FragTrap
{

public:

	FragTrap( void );
	FragTrap( std::string const &name );
	~FragTrap( void );
	FragTrap( FragTrap const &src );


	FragTrap&	operator=( FragTrap const &rhs );

	int		rangedAttack( std::string const &target );
	int		meleeAttack( std::string const &target) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount);
	int		vaulthunter_dot_exe(std::string const & target);

	int		get_HP( void );
	int		get_energy( void );

	std::string	getName( void ) const;



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