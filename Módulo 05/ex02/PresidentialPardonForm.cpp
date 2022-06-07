/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:26:02 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:27:54 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PresidentialPardonForm.hpp"
#include	<fstream>

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5, 0){
	this->_target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("Presidential", 25, 5, 0){
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy){
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(){
}

PresidentialPardonForm &	PresidentialPardonForm::operator =(PresidentialPardonForm const & rhs){
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

int	PresidentialPardonForm::beSigned(Bureaucrat const & bur)
{
	try
	{
		if (bur.getGrade() < 1)
			throw Form::GradeTooHighException();
		if (bur.getGrade() > 25)
			throw Form::GradeTooLowException();
		setIsSigned();
		return (1);
	}
	catch(GradeTooHighException & high)
	{
		std::cerr << high.what();
		return (0);
	}
	catch(GradeTooLowException & low)
	{
		std::cerr << low.what();
		return (0);
	}
}

int	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	try
	{
		if (executor.getGrade() > this->getExecGrade())
			throw Form::NotEnoughGrade();
		if (!this->getIsSigned())
			throw Form::NotSignedJetException();
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox 👍\n";
		std::cout << executor.getName() << " has successfully executed " << this->getName() << " ✅\n";
		return 1;
	}
	catch(Form::NotSignedJetException & no)
	{
		std::cerr << no.what();
		return 0;
	}
	catch(Form::NotEnoughGrade & no)
	{
		std::cerr << no.what();
		return 0;
	}
}
