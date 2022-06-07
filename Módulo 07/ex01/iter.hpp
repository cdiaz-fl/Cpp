/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:29:57 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/03 12:06:14 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include	<iostream>
#include	<cstdlib>

template <typename T>
void	iter(T *address, size_t lenght, void (&function)(T&))
{
	size_t	i;

	if (address == NULL)
		return ;
	std::cout << "Array address is " << &address << "\n";
	std::cout << "Array lenght is " << lenght << "\n";
	i = 0;
	while (i < lenght && address[i])
	{
		function(address[i]);
		i++;
	}
	return ;
}

template <typename T>
void	iter(T const *address, size_t lenght, void (&function)(T const &))
{
	size_t	i;

	if (address == NULL)
		return ;
	std::cout << "Array address is " << &address << "\n";
	std::cout << "Array lenght is " << lenght << "\n";
	i = 0;
	while (i < lenght)
	{
		function(address[i]);
		i++;
	}
	return ;
}

#endif
