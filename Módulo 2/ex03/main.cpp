/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:18:08 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:50:50 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed.hpp"
#include	"Point.hpp"
#include	<cmath>
#include <iostream>

int main( void ) {
	Point	a(2.5f, 3.5f);
	Point	b(5.1f, 1.5f);
	Point	c(7.1f, 6.5f);

	Point	point(5.0f, 1.7f);

	std::cout << "a point is x = " << a.get_x() << "  y = " << a.get_y() << std::endl;
	std::cout << "b point is x = " << b.get_x() << "  y = " << b.get_y() << std::endl;
	std::cout << "c point is x = " << c.get_x() << "  y = " << c.get_y() << std::endl;
	std::cout << "real point is x = " << point.get_x() << "  point = " << point.get_y() << std::endl;

	if (bsp(a, b, c, point))
		std::cout << "-------------Congrats, the point is inside de triangle------------\n";
	return 0;
}
