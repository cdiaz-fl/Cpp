/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 08:09:15 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Animal.hpp"

Animal::Animal() : _type("Animal"){
	std::cout << "Animal default constructor called!\n";
}

Animal::Animal(Animal const & copy){
	std::cout << "Animal copy constructor called!\n";
	*this = copy;
}

Animal::~Animal(){
	std::cout << "Animal default destructor called!\n";
}

Animal &	Animal::operator =(Animal const & rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	Animal::getType()const{
	return this->_type;
}
