/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:06:11 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:28:47 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define	FIXED_HPP

#include <iostream>

class	Fixed{
public:
	Fixed();
	~Fixed();
	Fixed( Fixed const &copy);
	Fixed( int const int_val);
	Fixed( float const float_val);
	Fixed & operator=(Fixed const & overload);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int	_rawbits;
	static const int _n_bits = 8;
};


std::ostream & operator<<(std::ostream & os, Fixed const & val);
#endif
