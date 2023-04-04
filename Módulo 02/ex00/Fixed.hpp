/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 07:06:11 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/28 08:51:38 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define	FIXED_HPP

class	Fixed{
public:
	Fixed();
	~Fixed();
	Fixed( Fixed const &copy);
	Fixed & operator=(Fixed const & overload);
	int getRawBits( void ) const;
	void setRawBits ( int const raw );
private:
	int	_rawbits;
	static const int n_bits = 8;
};
#endif
