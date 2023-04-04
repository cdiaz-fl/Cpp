/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:34:48 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/29 08:29:44 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default"), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "ClapTrap default constructor called!\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0){
	std::cout << "ClapTrap name constructor called!\n";
}

ClapTrap::ClapTrap(ClapTrap const & src){
	std::cout << "Copy constructor called!\n";
	*this = src;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called!\n";
}

void	ClapTrap::attack(std::string const & target){
	std::cout << "Claptrap " << this->get_name() << " attacks " << target;
	std::cout << ", causing " << this->get_hit_points() << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "Claptrap " << this->get_name() << " took ";
	std::cout << amount << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << "Claptrap " << this->get_name() << " has been repaired ";
	std::cout << "with an mount of " << amount << "!\n";
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & src){
	return o << src.get_name();
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs){
	if (this != &rhs)
	{
		this->_name = rhs.get_name();
		this->_hit_points = rhs.get_hit_points();
		this->_energy_points = rhs.get_energy_points();
		this->_attack_damage = rhs.get_attack_damage();
	}
	return *this;
}

std::string	ClapTrap::get_name(void)const{
	return this->_name;
}

int	ClapTrap::get_hit_points(void)const{
	return this->_hit_points;
}

int	ClapTrap::get_energy_points(void)const{
	return this->_energy_points;
}

int	ClapTrap::get_attack_damage(void)const{
	return this->_attack_damage;
}

void	ClapTrap::set_name(std::string val){
	this->_name = val;
}

void	ClapTrap::set_hit_points(int val){
	this->_hit_points = val;
}

void	ClapTrap::set_energy_points(int val){
	this->_energy_points = val;
}

void	ClapTrap::set_attack_damage(int val){
	this->_attack_damage = val;
}
