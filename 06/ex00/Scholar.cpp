/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scholar.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 13:57:33 by sglass            #+#    #+#             */
/*   Updated: 2021/05/01 22:52:37 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scholar.hpp"

Scholar::Scholar( std::string const &liter ) : _liter(liter)
{
	_i = 0;
	_d = 0.0;
	_f = 0.0f;
	_c = '\0';
	_flagDot = 0;
	_flagNull = 0;
	return ;
}

Scholar::~Scholar( void )
{
	return ;
}

Scholar::Scholar( Scholar const &src )
{
	
	*this = src;
	return ;
}

Scholar&	Scholar::operator=( Scholar const & rhs)
{
	if ( this != &rhs )
	{
		this->_liter = rhs._liter;
		this->_flagDot = rhs._flagDot;
		this->_flagNull = rhs._flagNull;
		this->_i = rhs._i;
		this->_d = rhs._d;
		this->_f = rhs._f;
		this->_c = rhs._c;
	}
	return *this;
}

void	Scholar::output( void )
{
	if (_d < INT_MIN || _d > INT_MAX || isnan(_d) != 0)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _i << std::endl;

	if (_d < -128 || _d > 127 || isnan(_d) != 0)
		std::cout << "char: impossible" << std::endl;
	else if (_d < 32 || _d > 126)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: '" << _c <<  "'" << std::endl;
	

	std::cout << "double: " << std::fixed << std::setprecision(1) << _d << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << _d << "f" << std::endl;	
}

void	Scholar::convert( int code )
{
		if (code == 1)
		{
			_i = stoi(_liter);
			_d = static_cast<double>(_i);
			_f = static_cast<float>(_i);
			_c = static_cast<char>(_i);
		}
		if (code == 2)
		{
			_c = _liter[0];
			_d = static_cast<double>(_c);
			_f = static_cast<float>(_c);
			_i = static_cast<int>(_c);
		}
		if (code == 3)
		{
			_d = stod(_liter);
			_f = static_cast<float>(_d);
			_c = static_cast<char>(_d);
			_i = static_cast<int>(_d);
		}
		if (code == 4)
		{
			_f = stof(_liter);
			_c = static_cast<char>(_f);
			_i = static_cast<int>(_f);
			_d = static_cast<double>(_f);
		}
}

int		Scholar::parser( void )
{
	size_t i;

	i = 0;
	if (_liter[i] == '+' || _liter[i] == '-')
		i++;
	while (isdigit(_liter[i]))
		i++;
	if (i == _liter.size())
	{
		std::cout << "Its digit" << std::endl;
		return (1);
	}
	if (_liter.size() == 1 && ( static_cast<int>(_liter[0]) >= -128 && static_cast<int>(_liter[0]) <= 127))
	{
		std::cout << "Its char" << std::endl;
		return (2);
	}
	if (_liter[i] == '.' && _liter[i + 1] != '\0')
	{
		_flagDot++;
		i++;
	}

		while (isdigit(_liter[i]))
		{
			if (_liter[i] != '0')
				_flagNull++;
			i++;
		}
		if (i == _liter.size() || _liter.compare("-inf") == 0 || _liter.compare("+inf") == 0 ||  _liter.compare("nan") == 0)
		{
			std::cout << "Its double" << std::endl;
			return (3);
		}
		if ( ( _liter[i - 1] != '.' && _flagDot == 1 && i == _liter.size() - 1 && (_liter[i] == 'f' && _liter[i + 1] == '\0')) || _liter.compare("-inff") == 0 || _liter.compare("+inff") == 0 ||  _liter.compare("nanf") == 0)
		{
			std::cout << "Its float" << std::endl;
			return (4);
		}

	throw std::invalid_argument("dont know this shi.. ");
	return (0);
}