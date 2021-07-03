/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:10:36 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:27:25 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include <string>
#include <iostream>
#include <sstream>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:

	SuperMutant( void );
	virtual ~SuperMutant( void );
	SuperMutant( SuperMutant const &src );

	SuperMutant&	operator=( SuperMutant const &rhs );

	virtual void		takeDamage(int);

private:

protected:


};


#endif