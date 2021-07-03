/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CtBot.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:16:22 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:29:20 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CTBOT_H
#define CTBOT_H

#include <string>
#include <iostream>
#include <sstream>
#include "Enemy.hpp"

class CtBot : public Enemy
{

public:

	CtBot( void );
	virtual ~CtBot( void );
	CtBot( CtBot const &src );

	CtBot&	operator=( CtBot const &rhs );

private:

protected:


};


#endif