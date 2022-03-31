/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:53:50 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 08:09:21 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Animal.hpp"
#include	"Dog.hpp"
#include	"Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n-------------------Destroy---------------------\n\n";
	delete j;//should not create a leak
	delete i;
	return (0);
}
/*
int	main(){
	Animal	*all[10];

	std::cout << "\n-----------------Create Animals---------------------\n\n";
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			all[i] = new Dog();
		else	
			all[i] = new Cat();
		std::cout << "\n----looooop-------\n\n";

	}
	std::cout << "\n-----------------Deep Copy---------------------\n\n";

	Dog	*one = new Dog();
	one->have_ideas("Bark", "Eat", "Sleep");
	one->print_status();
	Dog	*two = new Dog(*one);
	delete one;
	two->print_status();
	delete two;


	

	std::cout << "\n-----------------Destroy Animals---------------------\n\n";
	for (int i = 0; i < 10; i++)
		delete all[i];
	std::cout << "\n-----------------Destroy Array---------------------\n\n";
	return 0;
}
*/
