/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 13:04:22 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 07:38:36 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Point.hpp"

Point::Point() : _x(0), _y(0){
}

Point::~Point(){
}

Point::Point( Point const &copy ) : _x(copy._x), _y(copy._y){
}

Point::Point( float const x, float const y ) : _x(x), _y(y){
}



//--------------------Overloads

Point & Point::operator			=(Point const overload) {
	if (this != &overload)
	{
		*(Fixed *)&this->_x = overload._x;
		*(Fixed *)&this->_y = overload._y;
	}
	return (*this);
}

bool Point::operator== (const Point &ref) const{
	//std::cout << "== operator called\n";
	if (this->get_x() == ref.get_x())
		return (true);
	return (false);
}

bool Point::operator<= (const Point &ref) const{
	//std::cout << "<= operator called\n";
	if (this->get_x() <= ref.get_x())
		return (true);
	return (false);
}


bool Point::operator>= (const Point &ref) const{
	//std::cout << ">= operator called\n";
	if (this->get_x() >= ref.get_x())
		return (true);
	return (false);
}


Point const &	Point::minx(Point const &one, Point const	&two){
	Fixed	const result = Fixed::min(one.get_x(), two.get_x());

	if (result.toFloat() == (one.get_x()).toFloat())
		return one;
	else
		return two;
}

Point const &	Point::maxx(Point const &one, Point const	&two){
	Fixed	const result = Fixed::max(one.get_x(), two.get_x());

	if (result.toFloat() == (one.get_x()).toFloat())
		return one;
	else
		return two;
}

Fixed const Point::get_x(void) const{
	return (this->_x);
}

Fixed const Point::get_y(void) const{
	return (this->_y);
}
