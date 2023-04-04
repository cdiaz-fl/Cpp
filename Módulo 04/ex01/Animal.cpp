/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 07:42:46 by cdiaz-fl         ###   ########.fr       */
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

void Animal::makeSound()const{
	std::cout << "An Animal making some noise...\n";
}

void	Animal::print_status()const{
}

void	Animal::have_ideas(std::string id1, std::string id2, std::string id3){
}
