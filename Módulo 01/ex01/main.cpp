/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:58:53 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 19:02:34 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"Zombie.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Zombie	*zombie_horde = zombieHorde(std::atoi(argv[1]), "Pepe");
	
		delete [] zombie_horde;
	}
	return 0;
}
