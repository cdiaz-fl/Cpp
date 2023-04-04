/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:46:22 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 11:29:40 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"AMateria.hpp"

AMateria::AMateria() : _type("materia"){
}

AMateria::AMateria(std::string const & type) : _type(type){
}

AMateria::AMateria(AMateria const & copy){
	*this = copy;
}

AMateria::~AMateria(){
}

AMateria	&	AMateria::operator =(AMateria const & rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}

std::string	const &	AMateria::getType()const{
	return	this->_type;
}

void AMateria::use(ICharacter& target){
}
