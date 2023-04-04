/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:53:59 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:12:04 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
	this->_name = "default";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap default constructor called!\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap constructor called!🔨\n";
}

FragTrap::FragTrap(FragTrap const & src){
	std::cout << "Fragtrap copy constructor called!👯\n";
	*this = src;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called!💀\n";
}

void	FragTrap::highFivesGuys(void){
	std::cout << this->get_name() << " says: Hey guys! Hi five!✋\n";
}

void	FragTrap::print_status(void)const{

	static int i = 1;
	std::cout << i << "º Frag's name is "<< this->_name << " and has " << this->_hit_points << " hit pts, ";
	std::cout << this->_energy_points << " energy pts and " << this->_attack_damage << " damage\n";
	i++;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}
