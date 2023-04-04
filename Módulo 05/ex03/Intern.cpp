/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:42:52 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 11:48:02 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Intern.hpp"


Intern::Intern(){
	std::cout << "----Default Intern Constructor called!---\n";
}

Intern::~Intern(){
	std::cout << "----Intern Destructor called!---\n";
}

Form *createS(std::string target){ 

	return new ShrubberyCreationForm(target);
};

Form *createR(std::string target){ return new RobotomyRequestForm(target);
};

Form *createP(std::string target){ return new PresidentialPardonForm(target);
};

Form *	Intern::makeForm(std::string form_name, std::string target){
	std::string	forms[3] = {"shrubberycreation", "robotomyrequest", "presidentialpardon"};
	fptr arr[] = {&Intern::createS, &Intern::createR, &Intern::createP};
	for(unsigned long j = 0; j < form_name.length(); j++)
	{
		if (form_name[j] == ' ')
		{
			form_name.erase(j, 1);
			j--;
		}
		form_name[j] = std::tolower(form_name[j]);
	}
	std::cout << "\n Modified form -->  " << form_name << "/\n";
	try
	{
		for(int i = 0; i < 3; i++)
		{
			if (!form_name.compare(forms[i]))
				return (this->*(arr[i]))(target);
		}
		throw NoSuchFormTypeException();
	}
	catch(NoSuchFormTypeException & no)
	{
		std::cerr << no.what();
		return 0;
	}
}
