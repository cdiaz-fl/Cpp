/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:42:20 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 09:43:04 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define	AMATERIA_HPP

#include	<iostream>
#include	"ICharacter.hpp"


class AMateria
{
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const & copy);
	~AMateria();
	AMateria	&	operator =(AMateria const & rhs);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif
