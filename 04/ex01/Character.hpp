/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:24:15 by sglass            #+#    #+#             */
/*   Updated: 2021/04/23 17:59:26 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CHARACTER_H
#define CHARACTER_H

#include <string>
#include <iostream>
#include <sstream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

public:

	Character(std::string const & name);
	virtual ~Character( void );
	Character( Character const &src );


	Character&	operator=( Character const &rhs );

	void 		recoverAP();
	void 		equip(AWeapon*);
	void 		attack(Enemy*);

	int			getAP( void ) const;
	AWeapon		*getWeap( void ) const;
	std::string const &getName() const;

private:
    std::string		_name;
	int				_action_points;
	AWeapon			*_weap;
	Character( void );

protected:


};

std::ostream& operator<<(std::ostream &out, const Character &c);


#endif