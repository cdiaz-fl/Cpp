/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:18:08 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:33:48 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed.hpp"
#include	<cmath>
#include <iostream>

int main( void ) {

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	Fixed e( 0 );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	//Comparison Overfloads
	if (b < c)
		std::cout << "b is smaller than  c\n";
	if (a > c)
		std::cout << "a is bigger than  c\n";
	if (c <= c && b <= c)
		std::cout << "c and b are smaller or equal than  b\n";
	if (b >= b && c >= b)
		std::cout << "c and b are bigger or equal than  b\n";
	if (b == b)
		std::cout << "b is equal to b\n";
	if (b != c)
		std::cout << "b is different than c\n";

	//Arithmetic Overfloads
	std::cout << "b + b is " << b + b << std::endl;
	std::cout << "b - b is " << b - b << std::endl;
	std::cout << "b * b is " << b * b << std::endl;
	std::cout << "b / b is " << b / b << std::endl;
	std::cout << "++e is " << ++e << std::endl;
	std::cout << "e++ is " << e++ << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "--e is " << --e << std::endl;
	std::cout << "e-- is " << e-- << std::endl;
	std::cout << "e is " << e << std::endl;

	//min & max
	std::cout << "between c and b, the min is " << Fixed::min(b, c) << std::endl;
	std::cout << "between a and e, the min is " << Fixed::min(a, e) << std::endl;
	std::cout << "between c and b, the max is " << Fixed::max(b, c) << std::endl;
	std::cout << "between a and e, the max is " << Fixed::max(a, e) << std::endl;
	
	return 0;
}
