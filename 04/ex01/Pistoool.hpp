/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pistoool.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:26:34 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:30:32 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PISTOOOL_H
#define PISTOOOL_H

#include <string>
#include <iostream>
#include <sstream>
#include "AWeapon.hpp"

class Pistoool : public AWeapon
{

public:

	Pistoool( void );
	virtual ~Pistoool( void );
	Pistoool( Pistoool const &src );


	Pistoool&	operator=( Pistoool const &rhs );

	virtual void attack() const;

private:

protected:


};


#endif