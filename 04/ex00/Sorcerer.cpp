/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:36:48 by sglass            #+#    #+#             */
/*   Updated: 2021/04/21 14:22:00 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string const &name, std::string const &title ) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer( void )
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
	return ;
}

Sorcerer::~Sorcerer( void )
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const &src )
{
	*this = src;

	return ;
}

Sorcerer&	Sorcerer::operator=( Sorcerer const &rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

std::string		Sorcerer::get_name( void ) const
{
	return (this->_name);
}

std::string		Sorcerer::get_title( void ) const
{
	return (this->_title);
}

void		Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::ostream& operator<<(std::ostream &out, const Sorcerer &s)
{
	out << "I am " << s.get_name() << ", " << s.get_title() << ", and I like ponies!" << std::endl;
	return (out);
}
