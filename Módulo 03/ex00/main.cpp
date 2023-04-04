/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 11:32:57 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 06:47:38 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ClapTrap.hpp"

int	main(void){
	ClapTrap pepe("Pepe");
	ClapTrap tomas("Tomás");
	ClapTrap juan("Juan");

	pepe.attack("Tomás");
	tomas.takeDamage(6);
	juan.beRepaired(4);

	return 0;
}
