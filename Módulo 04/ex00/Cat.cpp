/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 10:03:02 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat.hpp"

Cat::Cat() : _type("Cat"){
	std::cout << "Cat default constructor called!\n";
}

Cat::Cat(Cat const & copy){
	std::cout << "Cat copy constructor called!\n";
	*this = copy;
}

Cat::~Cat(){
	std::cout << "Cat default destructor called!\n";
}

Cat &	Cat::operator =(Cat const & rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	Cat::getType()const{
	return this->_type;
}

void Cat::makeSound()const{
	std::cout << "A Cat softly meowing...\n";
}
