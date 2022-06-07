/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonFormForm.hpp                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 06:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/11 09:28:19 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PRESIDENTIALPARDONFORM_HPP
# define	PRESIDENTIALPARDONFORM_HPP

#include	"Form.hpp"


class PresidentialPardonForm : public Form{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	~PresidentialPardonForm();
	PresidentialPardonForm &	operator =(PresidentialPardonForm const & rhs);
	virtual int	beSigned(Bureaucrat const & bur);
	virtual int	execute(Bureaucrat const & executor) const;
private:
	std::string	_target;
};
#endif
