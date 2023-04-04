/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:15:25 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/08 06:52:09 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"

int	main()
{
	Bureaucrat	one("pepe", 1);		
	Bureaucrat	two("paco", 150);

	std::cout << "\n-------------------Trying to create too high or too low-------------------\n\n";
	Bureaucrat	three("juan", 0);
	Bureaucrat	four("pablo", 151);


	std::cout << "\n-------------------Copy constructor-------------------\n\n";
	Bureaucrat	five(two);

	std::cout << "\n-------------------= Overload-------------------\n\n";
	Bureaucrat	six("mistófeles", 6);
	six = two;

	std::cout << "\n-------------------<< Overload-------------------\n\n";
	std::cout << one;
	std::cout << two;
	std::cout << three;
	std::cout << four;
	std::cout << five;
	std::cout << six;

	std::cout << "\n-------------------Increment and Decrement-------------------\n\n";

	one.incrementGrade();
	std::cout << one;
	one.decrementGrade();
	std::cout << one;

	two.decrementGrade();
	std::cout << two;
	two.incrementGrade();
	std::cout << two;
	return 0;
}
