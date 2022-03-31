/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:50:53 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 11:30:19 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Cure.hpp"

Cure::Cure() : _type("cure"){
}

Cure::Cure(Cure const & copy){
	*this = copy;
}

Cure::~Cure(){
}

Cure &	Cure::operator=(Cure const & rhs){
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::string	const & Cure::getType()const{
	return	_type;
}

/*
AMateria* Cure::clone() const{
	retu
}*/
