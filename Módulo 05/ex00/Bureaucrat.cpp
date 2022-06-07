/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:42:52 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/08 06:52:15 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("default"), _grade(150){
	std::cout << "----Default Constructor called!---\n";
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name){
	std::cout << "----Name Constructor called!---\n";
	setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy.getName()), _grade(copy.getGrade()){
	std::cout << "----Copy Constructor called!---\n";
}

Bureaucrat::~Bureaucrat(){
}

Bureaucrat & Bureaucrat::operator =(Bureaucrat const &rhs){
	std::cout << "----= overload called!---\n";
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}

void	Bureaucrat::incrementGrade(void)throw(){
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		std::cout << "----" << this->getName() << " has incremented his grade from --> " << this->getGrade();
		this->_grade--;
		std::cout << "  to --> " << this->getGrade() << "!---\n";

	}
	catch(GradeTooHighException & high)
	{
		std::cerr << high.what();
	}
}

void	Bureaucrat::decrementGrade(void)throw(){
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		std::cout << "----" << this->getName() << " has decremented his grade from --> " << this->getGrade();
		this->_grade++;
		std::cout << "  to --> " << this->getGrade() << "!---\n";
	}
	catch(GradeTooLowException & low)
	{
		std::cerr << low.what();
	}
}

std::string Bureaucrat::getName(void)const{
	return this->_name;
}

int Bureaucrat::getGrade(void)const{
	return this->_grade;
}

void	Bureaucrat::setGrade(int grade){
	
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade = grade;
	}
	catch(GradeTooHighException & high)
	{
		std::cerr << high.what();
	}
	catch(GradeTooLowException & low)
	{
		std::cerr << low.what();
	}
}

std::ostream &	operator <<(std::ostream &o, Bureaucrat const &me){
	return o << me.getName() << ", bureaucrat grade " << me.getGrade() << ".\n";
}
