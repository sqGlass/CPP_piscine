/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:43:24 by sglass            #+#    #+#             */
/*   Updated: 2021/04/09 12:25:43 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
	
private:

	std::string name;
	std::string type;

public:

	void	announce( void );

	Zombie( void );
	~Zombie( void );
};

#endif