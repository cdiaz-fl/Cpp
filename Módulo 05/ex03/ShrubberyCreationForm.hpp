/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 06:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:28:25 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERRYCREATIONFORM_HPP
# define	SHRUBBERRYCREATIONFORM_HPP

#include	"Form.hpp"


class ShrubberyCreationForm : public Form{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	~ShrubberyCreationForm();
	ShrubberyCreationForm &	operator =(ShrubberyCreationForm const & rhs);
	virtual int	beSigned(Bureaucrat const & bur);
	virtual int	execute(Bureaucrat const & executor) const;
private:
	std::string	_target;
};
#endif
