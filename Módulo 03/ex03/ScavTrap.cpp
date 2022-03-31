/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:34:48 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:29:08 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default"){
	this->_name = "default";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap default constructor called!\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap constructor called!\n";
}

ScavTrap::ScavTrap(ScavTrap const & src){
	std::cout << "Scavtrap copy constructor called!\n";
	*this = src;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called!\n";
}

void	ScavTrap::attack(std::string const & target){
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_hit_points << " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount){
	std::cout << "ScavTrap " << this->_name << " took ";
	std::cout << amount << " points of damage!\n";
}

void ScavTrap::beRepaired(unsigned int amount){
	std::cout << "ScavTrap " << this->_name << " has been repaired ";
	std::cout << "with an mount of " << amount << "!\n";
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode🛡\n";
}

void	ScavTrap::print_status(void)const{

	static int i = 1;
	std::cout << i << "º Scav's name is "<< this->_name << " and has " << this->_hit_points << " hit pts, ";
	std::cout << this->_energy_points << " energy pts and " << this->_attack_damage << " damage\n";
	i++;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}
