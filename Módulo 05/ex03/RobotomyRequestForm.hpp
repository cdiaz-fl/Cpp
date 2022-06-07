/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 06:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:28:22 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
# define	ROBOTOMYREQUESTFORM_HPP

#include	"Form.hpp"


class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	~RobotomyRequestForm();
	RobotomyRequestForm &	operator =(RobotomyRequestForm const & rhs);
	virtual int	beSigned(Bureaucrat const & bur);
	virtual int	execute(Bureaucrat const & executor) const;
private:
	std::string	_target;
};
#endif
