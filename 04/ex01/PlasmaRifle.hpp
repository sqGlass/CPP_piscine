/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:59:58 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:29:58 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include <string>
#include <iostream>
#include <sstream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:

	PlasmaRifle( void );
	virtual ~PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const &src );


	PlasmaRifle&	operator=( PlasmaRifle const &rhs );

	virtual void attack() const;

private:

protected:


};


#endif