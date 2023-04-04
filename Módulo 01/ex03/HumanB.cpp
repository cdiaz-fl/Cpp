/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:40:16 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 10:19:19 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _gun(NULL){
}

HumanB::~HumanB(void){

}

void	HumanB::attack(void)const{
	if (!this->_gun)
		std::cout << this->_name << " doesn't have a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &gun){

	this->_gun = &gun;

}
