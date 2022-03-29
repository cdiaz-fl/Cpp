/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 09:23:27 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:55:51 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Fixed.hpp"
#include	<cmath>

//-----------------------Constructors & Destructor--------------------

Fixed::Fixed() : _rawbits(0){
	//std::cout << "Default constructor called\n";
}

Fixed::~Fixed(){
	//std::cout << "Destructor called\n";
}

Fixed::Fixed( Fixed const &copy){
	//std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::Fixed( int const int_val) : _rawbits(int_val << this->_n_bits){
	//std::cout << "Int constructor called\n";
}

Fixed::Fixed( float const float_val){
	//std::cout << "Float constructor called\n";
	this->setRawBits(std::roundf(float_val * (1 << this->_n_bits)));
}


//-------------------------Overloads------------------------

Fixed & Fixed::operator=(Fixed const & overload){
	//std::cout << "Assignation operator called\n";
	if (this != &overload)
		this->_rawbits = overload.getRawBits();
	return *this;
}


bool Fixed::operator< (const Fixed &ref) const{
	//std::cout << "< operator called\n";
	if (this->getRawBits() < ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator> (const Fixed &ref) const{
	//std::cout << "> operator called\n";
	if (this->getRawBits() > ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<= (const Fixed &ref) const{
	//std::cout << "<= operator called\n";
	if (this->getRawBits() <= ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>= (const Fixed &ref) const{
	//std::cout << ">= operator called\n";
	if (this->getRawBits() >= ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator== (const Fixed &ref) const{
	//std::cout << "== operator called\n";
	if (this->getRawBits() == ref.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!= (const Fixed &ref) const{
	//std::cout << "!= operator called\n";
	if (this->getRawBits() != ref.getRawBits())
		return (true);
	return (false);
}

int Fixed::operator+ (const Fixed &ref) const{
	return (this->toInt() + ref.toInt());
}

int Fixed::operator- (const Fixed &ref) const{
	return (this->toInt() - ref.toInt());
}

int Fixed::operator* (const Fixed &ref) const{
	return (this->toInt() * ref.toInt());
}

int Fixed::operator/ (const Fixed &ref) const{
	return (this->toFloat() / ref.toFloat());
}

Fixed & Fixed::operator++ (void){
	this->_rawbits++;
	return (*this);
}

Fixed Fixed::operator++ (int){
	Fixed	old = *this;
	++*this;
	return (old);
}

Fixed & Fixed::operator-- (void){
	this->_rawbits--;
	return (*this);
}

Fixed Fixed::operator-- (int){
	Fixed	old = *this;
	--*this;
	return (old);
}

//-------------------Methods------------------

int Fixed::getRawBits( void ) const{
	return  _rawbits;	
}

void Fixed::setRawBits ( int const raw ){
	_rawbits = raw;
}


float Fixed::toFloat( void ) const{
	return ((float)this->getRawBits() / (1 << this->_n_bits));
}

int Fixed::toInt( void ) const{
	return (this->getRawBits() >> this->_n_bits);
}

Fixed const &	Fixed::min(const Fixed &one, const Fixed	&two){
	if (one < two)
		return one;
	if (two < one)
		return two;
	return one;
}

Fixed &	Fixed::min(Fixed &one, Fixed	&two){
	if (one < two)
		return one;
	else
		return two;
}

Fixed const &	Fixed::max(const Fixed &one, const Fixed	&two){
	if (one > two)
		return one;
	if (two > one)
		return two;
	return one;
}

Fixed &	Fixed::max(Fixed &one, Fixed	&two){
	if (one > two)
		return one;
	if (two > one)
		return two;
	return one;
}

//--------------------No member functions--------------------
std::ostream & operator<<(std::ostream & os, Fixed const & val){
	return os << val.toFloat();
}
