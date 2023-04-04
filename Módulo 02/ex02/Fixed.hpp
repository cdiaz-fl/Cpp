/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:06:11 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:33:58 by cdiaz-fl         ###   ########.fr       */
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

	Fixed & operator			=(Fixed const & overload);
	bool operator					< (const Fixed &ref) const;
	bool operator					> (const Fixed &ref) const;
	bool operator					<= (const Fixed &ref) const;
	bool operator					>= (const Fixed &ref) const;
	bool operator					== (const Fixed &ref) const;
	bool operator					!= (const Fixed &ref) const;
	int operator					+ (const Fixed &ref) const;
	int operator					- (const Fixed &ref) const;
	int operator					* (const Fixed &ref) const;
	int operator					/ (const Fixed &ref) const;
	Fixed & operator			++ (void);
	Fixed & operator			-- (void);
	Fixed operator				++ (int);
	Fixed operator				-- (int);

	static Fixed const & 	min(const Fixed &one, const Fixed &two);
	static Fixed & 				min(Fixed &one, Fixed &two);
	static Fixed const & 	max(const Fixed &one, const Fixed &two);
	static Fixed & 				max(Fixed &one, Fixed &two);

	float 								toFloat( void ) const;
	int 									toInt( void ) const;
	int 									getRawBits( void ) const;
	void 									setRawBits( int const raw );
private:
	int										_rawbits;
	static const int 			_n_bits = 8;
};


std::ostream & operator	<<(std::ostream & os, Fixed const & val);
#endif
