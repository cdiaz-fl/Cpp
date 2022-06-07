/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 06:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/08 12:36:24 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define	FORM_HPP

#include	"Bureaucrat.hpp"

class	Bureaucrat;

class	Form{
public:
	Form();
	Form(std::string const name, int sgrade, int egrade, int sign);
	Form(Form const &copy);
	~Form();
	Form &	operator =(Form const & rhs);

	class GradeTooHighException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Form can't have such a high sign or exec grade\n");
			}
	};
	class GradeTooLowException : public std::exception{
		public:
			virtual const char* what() const throw(){
				return ("Form can't have such a low sign or exec grade\n");
			}
	};
	int	beSigned(Bureaucrat const & bur);
	std::string getName()const;
	int getSignGrade()const;
	int getExecGrade()const;
	bool	getIsSigned()const;
	int setSignGrade(int sgrade);
	int setExecGrade(int egrade);
private:
	std::string const	_name;
	int const	_sign_grade;
	int const	_exec_grade;
	bool	_is_signed;
};
std::ostream & operator <<(std::ostream &o, Form const &me);
#endif
