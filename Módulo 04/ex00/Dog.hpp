/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 09:57:49 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include	<iostream>
#include	"Animal.hpp"

class	Dog : public Animal{
public:
	Dog();
	Dog(Dog const & copy);
	~Dog();
	Dog &	operator =(Dog const & rhs);
	virtual	std::string	getType()const;
	virtual void makeSound()const;
protected:
	std::string	_type;
};
#endif
