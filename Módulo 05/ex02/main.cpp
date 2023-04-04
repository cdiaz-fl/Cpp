/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:15:25 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:28:29 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	"Form.hpp"
#include	"ShrubberyCreationForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	one("pepe", 1);		
	Bureaucrat	two("paco", 146);
	Bureaucrat	three("juan", 138);

	std::cout << "\n-------------------Creating Shrubbery Form-------------------\n\n";
	ShrubberyCreationForm f1("home");
	std::cout << "\n-------Trying to exec it-----\n";
	one.executeForm(f1);
	two.executeForm(f1);
	three.executeForm(f1);
	std::cout << "\n-------Trying to sign it-----\n";
	two.signForm(f1);
	std::cout << "\n-------✍️-----\n";
	three.signForm(f1);
	std::cout << "\n-------Trying to exec it-----\n";
	two.executeForm(f1);
	three.executeForm(f1);
	std::cout << "\n-------exec----\n";
	one.executeForm(f1);

	std::cout << "\n\n-------------------Creating Robotomy Request Form-------------------\n\n";
	Bureaucrat	four("sandalio", 73);
	Bureaucrat	five("jose", 46);
	RobotomyRequestForm	f2("mistofeles");
	std::cout << "\n-------Trying to exec it-----\n";
	one.executeForm(f2);
	three.executeForm(f2);
	four.executeForm(f2);
	std::cout << "\n-------Trying to sign it-----\n";
	four.signForm(f2);
	std::cout << "\n-------✍️-----\n";
	five.signForm(f2);
	std::cout << "\n-------Trying to exec it-----\n";
	three.executeForm(f2);
	four.executeForm(f2);
	std::cout << "\n-------exec----\n";
	one.executeForm(f2);
	one.executeForm(f2);
	one.executeForm(f2);
	one.executeForm(f2);

	std::cout << "\n\n-------------------Creating Presidential Pardon Form-------------------\n\n";
	Bureaucrat	six("josefina", 26);
	Bureaucrat	seven("isidora", 6);
	PresidentialPardonForm	f3("marvin");
	std::cout << "\n-------Trying to exec it-----\n";
	one.executeForm(f3);
	six.executeForm(f3);
	seven.executeForm(f3);
	std::cout << "\n-------Trying to sign it-----\n";
	six.signForm(f3);
	std::cout << "\n-------✍️-----\n";
	seven.signForm(f3);
	std::cout << "\n-------Trying to exec it-----\n";
	six.executeForm(f3);
	seven.executeForm(f3);
	std::cout << "\n-------exec----\n";
	one.executeForm(f3);
	return 0;
}
