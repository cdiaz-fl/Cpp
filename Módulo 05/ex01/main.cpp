/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:15:25 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:31:01 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"

int	main()
{
	Bureaucrat	one("pepe", 1);		
	Bureaucrat	two("paco", 150);
	Bureaucrat	three;

	std::cout << "\n-------------------Trying to create too high or too low-------------------\n\n";
	Bureaucrat	four("juan", 0);
	Bureaucrat	five("pablo", 151);


	std::cout << "\n-------------------Copy constructor-------------------\n\n";
	Bureaucrat	six(two);

	std::cout << "\n-------------------= Overload-------------------\n\n";
	Bureaucrat	seven("mistófeles", 6);
	seven = two;

	std::cout << "\n-------------------<< Overload-------------------\n\n";
	std::cout << one;
	std::cout << two;
	std::cout << three;
	std::cout << four;
	std::cout << five;
	std::cout << six;
	std::cout << seven;

	std::cout << "\n-------------------Increment and Decrement-------------------\n\n";

	one.incrementGrade();
	std::cout << one;
	one.decrementGrade();
	std::cout << one;

	two.decrementGrade();
	std::cout << two;
	two.incrementGrade();
	std::cout << two;



	//FORMS

	std::cout << "\n\n\n\n\n-------------------Trying to create too high or too low Forms-------------------\n\n";
	Form	f1;
	Form	f2("law2", 5, 10, 0);
	Form	f3("law3", 0, 10, 0);
	Form	f4("law4", 10, 0, 0);
	Form	f5("law5", 151, 10, 0);
	Form	f6("law6", 10, 151, 0);

	std::cout << "\n-------------------Copy constructor-------------------\n\n";
	Form	f7(f2);

	std::cout << "\n-------------------= Overload-------------------\n\n";
	Form	f8("law8", 42, 42, 1); 
	f8 = f2;

	std::cout << "\n-------------------<< Overload-------------------\n\n";
	std::cout << f1;
	std::cout << f2;
	std::cout << f3;
	std::cout << f4;
	std::cout << f5;
	std::cout << f6;
	std::cout << f7;
	std::cout << f8;

	std::cout << "\n-------------------Be Sign-------------------\n\n";
	one.signForm(f2);
	std::cout << f2;
	std::cout << f8;
	two.signForm(f8);
	std::cout << f8;
	return 0;
}
