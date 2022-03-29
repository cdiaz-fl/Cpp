/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:24:28 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 19:11:36 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Karen.hpp"
#include	<cstdlib>

Karen::Karen(void){

}

Karen::~Karen(void){

}

void Karen::complain( std::string level ){
	void	(Karen::*ptr_method[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning,  &Karen::error};
	std::string all[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i;

	for (i = 0; i < 4; i++)
		if (all[i] == level)
			break;

	switch (i){
		case 0: (this->*ptr_method[0])();
		case 1: (this->*ptr_method[1])();
		case 2: (this->*ptr_method[2])();
		case 3: (this->*ptr_method[3])(); break;
		default: std::cout << "[ Probably complaining about insignificant problems ]\n"; break;
	}
}

void Karen::debug( void ){
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n\n";
}

void Karen::info( void ){
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n\n";
}

void Karen::warning( void ){
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month\n\n";
}

void Karen::error( void ){
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now\n\n";
}
