/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 19:05:49 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/15 10:36:03 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"Zombie.hpp"

Zombie* newZombie(std::string name){
	Zombie	*new_zombie = new Zombie(name);
	return (new_zombie);
}

