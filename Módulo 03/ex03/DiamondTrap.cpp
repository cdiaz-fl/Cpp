/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:59:42 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:26:48 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
	this->_name = "default";
	ClapTrap::_name = "default_clap_name";
	std::cout << "Diamond default constructor called!\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name){
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	std::cout << "Diamond constructor called!💎\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const & src){
	std::cout << "Diamond copy constructor called!👯\n";
	*this = src;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "Diamond destructor called!♦️\n";
}

void	DiamondTrap::set_diamond_name(std::string val){
	this->_name = val;
}

void	DiamondTrap::whoAmI(){
	std::cout << "Hi! My Diamond name is " << this->_name << "\n";
}

void	DiamondTrap::print_status(void)const{

	static int i = 1;
	std::cout << i << "º Diam's name is "<< this->_name << " and has " << this->_hit_points << " hit pts, ";
	std::cout << this->_energy_points << " energy pts and " << this->_attack_damage << " damage\n";
	i++;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return *this;
}
