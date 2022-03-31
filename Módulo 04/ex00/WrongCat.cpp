/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 09:05:07 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 10:13:13 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat"){
	std::cout << "WrongCat default constructor called!\n";
}

WrongCat::WrongCat(WrongCat const & copy){
	std::cout << "WrongCat copy constructor called!\n";
	*this = copy;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat default destructor called!\n";
}

WrongCat &	WrongCat::operator =(WrongCat const & rhs){
	if (this != &rhs)
		this->_type = rhs._type;
	return *this;
}

std::string	WrongCat::getType()const{
	return this->_type;
}

void WrongCat::makeSound()const{
	std::cout << "A WrongCat softly meowing...\n";
}
