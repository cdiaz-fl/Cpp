/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:42:52 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:30:20 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Form.hpp"


Form::Form() : _name("default"), _sign_grade(150), _exec_grade(150), _is_signed(0){
	std::cout << "----Form Default Constructor called!---\n";
}

Form::Form(std::string const name, int sgrade, int egrade, int sign) : _name(name),
_sign_grade(setSignGrade(sgrade)), _exec_grade(setExecGrade(egrade)), _is_signed(sign){
	std::cout << "----Form Name Constructor called!---\n";
}

Form::Form(Form const &copy) : _name(copy.getName()), _sign_grade(setSignGrade(copy.getSignGrade())),
_exec_grade(setExecGrade(copy.getExecGrade())), _is_signed(copy.getIsSigned()){
	std::cout << "----Form Copy Constructor called!---\n";
}

Form::~Form(){
}

//Overload

Form & Form::operator =(Form const &rhs){
	std::cout << "----Form = overload called!---\n";
	if (this != &rhs)
		this->_is_signed = rhs.getIsSigned();
	return *this;
}



//Getters

std::string Form::getName(void)const{
	return this->_name;
}

int Form::getSignGrade(void)const{
	return this->_sign_grade;
}

int Form::getExecGrade(void)const{
	return this->_exec_grade;
}

bool Form::getIsSigned(void)const{
	return this->_is_signed;
}


//Setters

int	Form::setSignGrade(int sgrade){
	try
	{
		if (sgrade < 1)
			throw Form::GradeTooHighException();
		if (sgrade > 150)
			throw Form::GradeTooLowException();
		return (sgrade);
	}
	catch(GradeTooHighException & high)
	{
		std::cerr << high.what();
		return (150);
	}
	catch(GradeTooLowException & low)
	{
		std::cerr << low.what();
		return (150);
	}
}

int	Form::setExecGrade(int egrade){
	try
	{
		if (egrade < 1)
			throw Form::GradeTooHighException();
		if (egrade > 150)
			throw Form::GradeTooLowException();
		return (egrade);
	}
	catch(GradeTooHighException & high)
	{
		std::cerr << high.what();
		return (150);
	}
	catch(GradeTooLowException & low)
	{
		std::cerr << low.what();
		return (150);
	}
}

//Member funsctions

int	Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() > this->getSignGrade())
		return 0;
	this->_is_signed = 1;	
	return 1;
}

std::ostream &	operator <<(std::ostream &o, Form const &me){
	o << "📄 Form:   name -> " << me.getName() << ", sign grade -> " << me.getSignGrade();
	o << " exec grade -> " << me.getExecGrade() << ", is signed? -> ";
	if (me.getIsSigned())
		o << "✅\n";
	else
		o << "❌\n";
	return o;
}
