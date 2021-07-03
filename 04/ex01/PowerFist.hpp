/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:16:47 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:18:41 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef POWERFIST_H
#define POWERFIST_H

#include <string>
#include <iostream>
#include <sstream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:

	PowerFist( void );
	virtual ~PowerFist( void );
	PowerFist( PowerFist const &src );


	PowerFist&	operator=( PowerFist const &rhs );

	virtual void attack() const;

private:

protected:


};


#endif