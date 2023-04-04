/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:06:11 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:50:48 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
# define	POINT_HPP

#include	"Fixed.hpp"

class	Point{
public:
	Point();
	~Point();
	Point( Point const &copy);
	Point( float const x, float const y);

	Point & operator			=(Point const overload); //Este overload falla
	bool operator					== (const Point &ref) const;
	bool operator					<= (const Point &ref) const;
	bool operator					>= (const Point &ref) const;

	static Point const & 				minx(Point const &one, Point const &two);
	static Point const & 				maxx(Point const &one, Point const &two);
	Fixed	const get_x(void) const;
	Fixed	const get_y(void) const;
private:
	Fixed const						_x;
	Fixed const						_y;
};


bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
