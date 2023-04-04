/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:38:18 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/18 19:57:12 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DATA_HPP
# define DATA_HPP

#include	<cstdint>

class	Data{
public:
	Data();
	Data(int val);
	Data(Data const &copy);
	~Data();
	Data &	operator =(Data const &rhs);
	int	getval()const;
private:
	int	_value;
};
#endif
