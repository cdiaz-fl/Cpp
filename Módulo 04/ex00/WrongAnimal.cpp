/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 10:13:17 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal"){
	std::cout << "WrongAnimal default constructor called!\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy){
	std::cout << "WrongAnimal copy constructor called!\n";
	*this = copy;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal default destructor called!\n";
}

WrongAnimal &	WrongAnimal::operator =(WrongAnimal const & rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	WrongAnimal::getType()const{
	return this->_type;
}

void WrongAnimal::makeSound()const{
	std::cout << "An WrongAnimal making some noise...\n";
}
