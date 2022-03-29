/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 16:23:34 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:50:53 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Point.hpp"
#include	"Fixed.hpp"

void ft_sort_points(Point const a, Point const b, Point const c, Point *sortx)
{
	sortx[0] = Point::minx(Point::minx(a, b), c);
	sortx[2] = Point::maxx(Point::maxx(a, b), c);

	if (sortx[0] == a && sortx[2] == b)
		sortx[1] = c;
	else if (sortx[0] == a && sortx[2] == c)
		sortx[1] = b;
	else if (sortx[0] == b && sortx[2] == c)
		sortx[1] = a;
	else if (sortx[0] == b && sortx[2] == a)
		sortx[1] = c;
	else if (sortx[0] == c && sortx[2] == b)
		sortx[1] = a;
	else if (sortx[0] == c && sortx[2] == a)
		sortx[1] = b;
}

Fixed	ft_calculate_slope(Point a, Point b)
{
	Fixed	max_y = Fixed::max(a.get_y(), b.get_y());
	Fixed	min_y = Fixed::min(a.get_y(), b.get_y());
	Fixed	max_x = Fixed::max(a.get_x(), b.get_x());
	Fixed	min_x = Fixed::min(a.get_x(), b.get_x());

	Fixed	slope((max_y.toFloat() - min_y.toFloat()) / (max_x.toFloat() - min_x.toFloat()));
	if (b.get_y() < a.get_y())
		slope = (slope.toFloat() * -1);
	return slope;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point	sortx[3];
	ft_sort_points(a, b, c, sortx);
	Fixed	slope1;
	Fixed	slope2;
	Fixed	slope3;
	
	std::cout << "-> min point is x = " << sortx[0].get_x() << "  y = " << sortx[0].get_y() << std::endl;
	std::cout << "-> med point is x = " << sortx[1].get_x() << "  y = " << sortx[1].get_y() << std::endl;
	std::cout << "-> max point is x = " << sortx[2].get_x() << "  y = " << sortx[2].get_y() << std::endl;

	std::cout << "real point is x = " << point.get_x() << "  point = " << point.get_y() << std::endl;
	if (point >= sortx[0] && point <= sortx[2]) //It's inner the x range
	{
		slope1 = ft_calculate_slope(sortx[0], point);
		slope2 = ft_calculate_slope(sortx[0], sortx[1]);
		slope3 = ft_calculate_slope(sortx[0], sortx[2]);
		std::cout << "slope 1 is = " << slope1 << std::endl;
		std::cout << "slope 2 is = " << slope2 << std::endl;
		std::cout << "slope 3 is = " << slope3 << std::endl;
		std::cout << "min slope between 2 and 3 is = " << Fixed::min(slope2, slope3) << std::endl;
		std::cout << "max slope between 2 and 3 is = " << Fixed::max(slope2, slope3) << std::endl;
		if (slope1 <= Fixed::min(slope2, slope3) || slope1 >= Fixed::max(slope2, slope3))
			return false;
		std::cout << "-------------------------------" << std::endl;
		slope1 = ft_calculate_slope(sortx[2], point);
		slope2 = ft_calculate_slope(sortx[2], sortx[1]);
		slope3 = ft_calculate_slope(sortx[2], sortx[0]);
		std::cout << "slope 1 is = " << slope1 << std::endl;
		std::cout << "slope 2 is = " << slope2 << std::endl;
		std::cout << "slope 3 is = " << slope3 << std::endl;
		std::cout << "min slope between 2 and 3 is = " << Fixed::min(slope2, slope3) << std::endl;
		std::cout << "max slope between 2 and 3 is = " << Fixed::max(slope2, slope3) << std::endl;
		if (slope1 <= Fixed::min(slope2, slope3) || slope1 >= Fixed::max(slope2, slope3))
			return false;
	}
	else
		return (false);
	return (true);
}

