/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:15:25 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 12:30:12 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	"Form.hpp"
#include	"ShrubberyCreationForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"PresidentialPardonForm.hpp"
#include	"Intern.hpp"

int	main()
{
	std::cout << "\n-------------------Creating Interns-------------------\n\n";
	Intern	i1;

	std::cout << "\n-------Trying to create forms-----\n";
	i1.makeForm("PESIDENTIAL PARDON", "pancho");
	i1.makeForm("icecream", "luis");
	i1.makeForm("robotomy", "pancho");
	i1.makeForm("shrubberry", "pancho");

	std::cout << "\n\n-------Creating forms-----\n";
	Form *src1 = NULL;
	Form *src2 = NULL;
	Form *src3 = NULL;

	src1 = i1.makeForm(" robotomy request", "pancho");
	std::cout << *src1 << "\n";
	src2 = i1.makeForm("ShRuBbeRyCrEaTiOn", "pancho");
	std::cout << *src2 << "\n";
	src3 = i1.makeForm("PRESIDENTIAL                  PARDON", "pancho");
	std::cout << *src3 << "\n";
	
	if (src1)
		delete src1;
	if (src2)
		delete src2;
	if (src3)
		delete src3;
	
	return 0;
}
