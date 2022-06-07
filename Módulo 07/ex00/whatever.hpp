/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 09:45:04 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/03 11:51:14 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T & x, T & y){
	T	aux; 

	aux = x;
	x = y;
	y = aux;
}

template< typename T >
T const &	max(T & x, T & y){
	if (x >= y)
		return x;
	return (y);
}

template< typename T >
T const &	min(T & x, T & y){
	if (x <= y)
		return (x);
	return (y);
}

#endif
