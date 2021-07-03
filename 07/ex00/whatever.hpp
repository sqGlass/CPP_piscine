/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 23:18:23 by sglass            #+#    #+#             */
/*   Updated: 2021/05/04 11:57:59 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

template <typename T>
const T& max(const T& a, const T& b)
{
	if (a > b)
		return (a);
	return (b);
}

template <typename T>
const T& min(const T& a, const T& b)
{
   	if (a < b)
		return (a);
	return (b);
}

template <typename T>
void	swap( T& a,  T& b)
{
	if (&a != &b)
	{
		T c = a;
		a = b;
		b = c;
	}

}