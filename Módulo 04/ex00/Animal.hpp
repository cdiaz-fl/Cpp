/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 06:29:35 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include	<iostream>

class	Animal{
public:
	Animal();
	Animal(Animal const & copy);
	virtual ~Animal();
	Animal &	operator =(Animal const & rhs);
	virtual	std::string	getType()const;
	virtual void makeSound()const;
protected:
	std::string	_type;
};
#endif
