/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:18:37 by sglass            #+#    #+#             */
/*   Updated: 2021/05/05 12:44:54 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

template <typename T1>
typename T1::iterator easyfind(T1 &arr, int n)
{
	typename T1::iterator it;
	it = std::find(arr.begin(), arr.end(), n);
	if (it != arr.end())
		return (it);
	else
		throw std::exception();
}