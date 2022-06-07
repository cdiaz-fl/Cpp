/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:26:02 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:27:56 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"RobotomyRequestForm.hpp"
#include	<fstream>

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45, 0){
	this->_target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy", 72, 45, 0){
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy){
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(){
}

RobotomyRequestForm &	RobotomyRequestForm::operator =(RobotomyRequestForm const & rhs){
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

int	RobotomyRequestForm::beSigned(Bureaucrat const & bur)
{
	try
	{
		if (bur.getGrade() < 1)
			throw Form::GradeTooHighException();
		if (bur.getGrade() > 72)
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

int	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	static int i = 2;
	try
	{
		if (executor.getGrade() > this->getExecGrade())
			throw Form::NotEnoughGrade();
		if (!this->getIsSigned())
			throw Form::NotSignedJetException();
		if (i % 2 == 0)
			std::cout << this->_target << " has been robotomized successfully⚙️\n";
		i++;
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
