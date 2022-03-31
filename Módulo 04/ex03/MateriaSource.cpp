/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:46:22 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 12:18:58 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"MateriaSource.hpp"

MateriaSource::MateriaSource(){
}

MateriaSource::MateriaSource(MateriaSource const & copy){
	*this = copy;
}

MateriaSource::~MateriaSource(){
}

/*
MateriaSource	&	MateriaSource::operator =(MateriaSource const & rhs){
	if (this != &rhs)
		this->_type = rhs.getType();
	return *this;
}*/

void MateriaSource::learnMateria(MateriaSource*){
}

MateriaSource* MateriaSource::createMateria(std::string const & type){
}
