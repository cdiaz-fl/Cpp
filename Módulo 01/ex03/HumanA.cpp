/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:36:26 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 10:19:26 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &gun) : _name(name), _gun(gun){
}

HumanA::~HumanA(void){

}

void	HumanA::attack(void)const{
	std::cout << this->_name << " attacks with his " << this->_gun.getType() << std::endl;
}
