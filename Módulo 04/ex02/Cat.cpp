/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 07:42:43 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat.hpp"

Cat::Cat() : _type("Cat"), _brain(new Brain()){
	std::cout << "Cat default constructor called!\n";
}

Cat::Cat(Cat const & copy){
	std::cout << "Cat copy constructor called!\n";
	*this = copy;
}

Cat::~Cat(){
	std::cout << "Cat default destructor called!\n";
	delete this->_brain;
}

Cat &	Cat::operator =(Cat const & rhs){
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::string	Cat::getType()const{
	return this->_type;
}

void Cat::makeSound()const{
	std::cout << "A Cat softly meowing...\n";
}

void	Cat::print_status()const{
	std::cout	<< "This " << this->_type << " has 3 ideas: " << this->_brain->get_idea(0); 
	std::cout	<< ", " << this->_brain->get_idea(1) << ", " << this->_brain->get_idea(2) << "\n";
}

void	Cat::have_ideas(std::string id1, std::string id2, std::string id3){
	this->_brain->set_idea(0, id1);
	this->_brain->set_idea(1, id2);
	this->_brain->set_idea(2, id3);
}
