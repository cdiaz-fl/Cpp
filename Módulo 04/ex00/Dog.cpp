/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 10:03:06 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Dog.hpp"

Dog::Dog() : _type("Dog"){
	std::cout << "Dog default constructor called!\n";
}

Dog::Dog(Dog const & copy){
	std::cout << "Dog copy constructor called!\n";
	*this = copy;
}

Dog::~Dog(){
	std::cout << "Dog default destructor called!\n";
}

Dog &	Dog::operator =(Dog const & rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	Dog::getType()const{
	return this->_type;
}
void Dog::makeSound()const{
	std::cout << "A Dog barkind loud...\n";
}
