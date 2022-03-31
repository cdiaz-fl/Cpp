/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:18:54 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 12:15:06 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Character.hpp"

Character::Character() : _name("default"), _materia(new AMateria[4]){
}

Character::Character(std::string name) : _name(name), _materia(nullptr){
}

Character::Character(Character const & copy){
	*this = copy;
}

Character::~Character(){
}

Character	&	Character::operator =(Character const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_materia = 
	}
	return *this;
}

std::string const & Character::getName() const{
	return	this->_name
}

void Character::equip(AMateria* m){
}

void Character::unequip(int idx){
}

void Character::use(int idx, ICharacter& target){
}
