/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:22:19 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/08 08:46:17 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include	<iostream>
#include	"Form.hpp"

class	Form;

class Bureaucrat{
public:
	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();
	Bureaucrat & operator =(Bureaucrat const &rhs);

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Bureaucrat can't have such a high grade\n");
			}
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Bureaucrat can't have such a low grade\n");
			}
	};

	void	incrementGrade(void)throw();
	void	decrementGrade(void)throw();
	std::string getName(void)const;
	int getGrade(void)const;
	void	setGrade(int grade);
	void	signForm(Form &form)const;
private:
	std::string const _name;
	int	_grade;
};
std::ostream & operator <<(std::ostream &o, Bureaucrat const &me);
#endif
