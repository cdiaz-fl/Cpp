/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:32:57 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:29:13 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"
#include	"FragTrap.hpp"
#include	"DiamondTrap.hpp"

int	main(void){
	std::cout << "\n---------------ClapTrap-------------\n";
	ClapTrap pepe("Pepe");
	ClapTrap tomas("Tomás");
	ClapTrap juan("Juan");

	pepe.attack("Tomás");
	tomas.takeDamage(6);
	juan.beRepaired(4);

	std::cout << "\n---------------ScavTrap-------------\n";
	ScavTrap	s_pepe("Pepe");
	ScavTrap 	s_tomas("Tomás");
	ScavTrap 	s_juan("Juan");

	s_pepe.print_status();
	s_tomas.print_status();
	s_juan.print_status();

	std::cout << "\n---------------ScavTrap doing things-------------\n";
	s_pepe.attack("Tomás");
	s_tomas.takeDamage(6);
	s_juan.beRepaired(4);
	s_juan.guardGate();

	std::cout << "\n---------------FragTrap-------------\n";
	FragTrap	f_jokin("Jokin");
	FragTrap 	f_papa("Papa");
	FragTrap 	f_solinis("Solinis");

	f_jokin.print_status();
	f_papa.print_status();
	f_solinis.print_status();

	std::cout << "\n---------------FragTrap doing things-------------\n";
	f_jokin.attack("Papa");
	f_papa.takeDamage(100);
	f_papa.beRepaired(50);
	f_solinis.highFivesGuys();

	std::cout << "\n---------------DiamondTrap-------------\n";
	DiamondTrap	d_nico("Nico");
	DiamondTrap	d_lukas("Lukas");
	DiamondTrap	d_epera("Epera");

	d_nico.print_status();
	d_lukas.print_status();
	d_epera.print_status();

	std::cout << "\n---------------DiamondTrap doing things-------------\n";
	d_nico.highFivesGuys();
	d_lukas.guardGate();
	d_nico.whoAmI();
	d_epera.attack("Lukas");
	d_epera.takeDamage(100);
	d_lukas.beRepaired(50);

	d_epera = d_lukas;
	d_epera.print_status();
	std::cout << "\n---------------End-------------\n";

	return 0;
}
