/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:58:53 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/15 10:41:30 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"Zombie.hpp"

int	main()
{
	Zombie	*z1 = newZombie("Uno");

	randomChump("Dos");
	randomChump("Tres");
	delete z1;
	randomChump("Cuatro");
	return 0;
}
