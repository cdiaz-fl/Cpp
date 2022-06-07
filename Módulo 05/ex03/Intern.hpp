/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:22:19 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 11:32:00 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
# define INTERN_HPP

#include	<iostream>
#include	"Form.hpp"
#include	"ShrubberyCreationForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"PresidentialPardonForm.hpp"

class Intern{
public:
	Intern();
	~Intern();

	class NoSuchFormTypeException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Intern cannot create such a form type\n");
			}
	};

	inline Form *createS(std::string target){ return new ShrubberyCreationForm(target); };
	inline Form *createR(std::string target){ return new RobotomyRequestForm(target); };
	inline Form *createP(std::string target){ return new PresidentialPardonForm(target); };
	Form *	makeForm(std::string form_name, std::string target);
};

typedef Form *(Intern::*fptr)(std::string);
#endif
