/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:06:48 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/15 10:28:39 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::~Zombie(void){
	std::cout << this->_name << " has died 💀\n";
}

void	Zombie::announce(void){
	std::cout << this->_name << " BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setname(std::string name){
	this->_name = name;
}
