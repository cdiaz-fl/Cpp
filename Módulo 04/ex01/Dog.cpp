/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 07:42:49 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Dog.hpp"

Dog::Dog() : _type("Dog"), _brain(new Brain()){
	std::cout << "Dog default constructor called!\n";
}

Dog::Dog(Dog const & copy){
	std::cout << "Dog copy constructor called!\n";
	*this = copy;
}

Dog::~Dog(){
	std::cout << "Dog default destructor called!\n";
	delete	this->_brain;
}

Dog &	Dog::operator =(Dog const & rhs){
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

std::string	Dog::getType()const{
	return this->_type;
}
void Dog::makeSound()const{
	std::cout << "A Dog barkind loud...\n";
}

void	Dog::print_status()const{
	std::cout	<< "This " << this->_type << " has 3 ideas: " << this->_brain->get_idea(0); 
	std::cout	<< ", " << this->_brain->get_idea(1) << ", " << this->_brain->get_idea(2) << "\n";
}

void	Dog::have_ideas(std::string id1, std::string id2, std::string id3){
	this->_brain->set_idea(0, id1);
	this->_brain->set_idea(1, id2);
	this->_brain->set_idea(2, id3);
}
