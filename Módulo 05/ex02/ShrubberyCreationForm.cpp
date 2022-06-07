/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:26:02 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:27:58 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ShrubberyCreationForm.hpp"
#include	<fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery", 145, 137, 0){
	this->_target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery", 145, 137, 0){
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy){
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator =(ShrubberyCreationForm const & rhs){
	if (this != &rhs)
		this->_target = rhs._target;
	return *this;
}

int	ShrubberyCreationForm::beSigned(Bureaucrat const & bur)
{
	try
	{
		if (bur.getGrade() < 1)
			throw Form::GradeTooHighException();
		if (bur.getGrade() > 145)
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

int	ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	try
	{
		if (executor.getGrade() > this->getExecGrade())
			throw Form::NotEnoughGrade();
		if (!this->getIsSigned())
			throw Form::NotSignedJetException();
		std::ofstream	file(this->_target + "_shrubberry");
		file << "        ##### ####                \n";
		file << "      ### /#|### |/####           \n";
		file << "     ##/#/  ||/##/_/##/_#         \n";
		file << "   ###  /###|/ #  # ###           \n";
		file << " ##__# _ ## | #/###_/_####        \n";
		file << "## #### #  #| /  #### ##/##       \n";
		file << " __#_--###`  |{,###---###-~       \n";
		file << "            }{/                   \n";
		file << "            }}{                   \n";
		file << "            }}{                   \n";
		file << "            {{}                   \n";
		file << "       -=-~{ .-^- _               \n";
		file << "            `}                    \n";
		file << "             {                    \n";
		file.close();
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
