/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:00:20 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 19:08:47 by sglass           ###   ########.fr       */
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

	Zombie( std::string name, std::string type );
	~Zombie( void );
};

#endif