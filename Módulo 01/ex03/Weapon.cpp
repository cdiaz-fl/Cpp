/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:23:44 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 10:19:36 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Weapon.hpp"


Weapon::Weapon(std::string gun){
	this->setType(gun);
}

Weapon::~Weapon(void){

}

void	Weapon::setType(std::string type){
	this->_type = type;
}

std::string	const & Weapon::getType(void) const{
	return _type;
}
