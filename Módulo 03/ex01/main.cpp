/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:32:57 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:06:03 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"

int	main(void){
	std::cout	<< "\n-------ClapTrap created---------\n\n";
	ClapTrap pepe("Pepe");
	ClapTrap tomas("Tomás");
	ClapTrap juan("Juan");

	std::cout	<< "\n-------ClapTraps doing things---------\n\n";
	pepe.attack("Tomás");
	tomas.takeDamage(6);
	juan.beRepaired(4);

	std::cout	<< "\n-------ScavTrap created---------\n\n";
	ScavTrap	s_alfon("Alfon");
	ScavTrap 	s_basabe("Basabe");
	ScavTrap 	s_pablo("Pablo");
	s_alfon.print_status();
	s_basabe.print_status();
	s_pablo.print_status();

	std::cout	<< "\n-------ScavTraps doing things---------\n\n";
	s_alfon.attack("Tomás");
	s_basabe.takeDamage(6);
	s_pablo.beRepaired(4);
	s_pablo.guardGate();

	std::cout	<< "\n--------------End----------------\n\n";
	return 0;
}
