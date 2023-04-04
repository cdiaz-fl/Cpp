/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:23:27 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:55:39 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _rawbits(0){
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed::Fixed( Fixed const &copy){
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed & Fixed::operator=(Fixed const & overload){
	std::cout << "Assignation operator called\n";
	if (this != &overload)
		this->_rawbits = overload.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return  _rawbits;	
}

void Fixed::setRawBits ( int const raw ){
	std::cout << "setRawBits member function called\n";
	_rawbits = raw;
}
