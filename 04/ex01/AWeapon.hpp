/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:11:20 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:22:00 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AWEAPON_H
#define AWEAPON_H

#include <string>
#include <iostream>
#include <sstream>

class AWeapon
{

public:

	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon( void );
	AWeapon( AWeapon const &src );


	AWeapon&	operator=( AWeapon const &rhs );

	std::string const &getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

private:
	std::string	_name;
	int			_apcost;
	int			_damage;
	AWeapon( void );

protected:


};


#endif