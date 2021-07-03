/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:19:15 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:28:32 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RADSCORPION_H
#define RADSCORPION_H

#include <string>
#include <iostream>
#include <sstream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

public:

	RadScorpion( void );
	virtual ~RadScorpion( void );
	RadScorpion( RadScorpion const &src );

	RadScorpion&	operator=( RadScorpion const &rhs );

private:

protected:


};


#endif