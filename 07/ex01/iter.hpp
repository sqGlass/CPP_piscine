/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 12:19:56 by sglass            #+#    #+#             */
/*   Updated: 2021/05/04 14:48:48 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip> 
#include <vector>

template <typename T1>
void iter(T1 *array, int length, void (*func)( T1  const &x ))
{
	int i;

	i = 0;
	while (i < length)
	{
		func(array[i]);
		i++;
	}
}