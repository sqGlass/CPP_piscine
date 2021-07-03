/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 14:24:16 by sglass            #+#    #+#             */
/*   Updated: 2021/04/08 15:32:31 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

# include <string>
# include <iostream>
# include <iomanip>

class Pony
{

private:

	int			age;
	std::string	name;	
	std::string dream;
	std::string	owner;

public:

	void	ponyGreeting( void );
	

	Pony( int age,  std::string name, std::string dream, std::string owner );
	~Pony( void);
};

#endif
