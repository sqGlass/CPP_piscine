/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:38:42 by sglass            #+#    #+#             */
/*   Updated: 2021/04/22 12:26:17 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <iostream>
#include <sstream>

class Enemy
{

public:

	Enemy(int hp, std::string const & type);
	virtual ~Enemy( void );
	Enemy( Enemy const &src );


	Enemy&	operator=( Enemy const &rhs );

	int					getHP() const;
	virtual void		takeDamage(int);
	std::string const	&getType() const;

private:
    int				_hp;
	std::string		_type;
	Enemy( void );

protected:


};


#endif