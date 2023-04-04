/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:46:42 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 11:07:59 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
# define	ICE_HPP

#include	"AMateria.hpp"

class	Ice : public AMateria{
private:
	std::string	_type;
public:
	Ice();
	Ice(Ice const & copy);
	~Ice();
	Ice &	operator =(Ice const & rhs);
	//AMateria* clone() const;
	std::string const & getType() const; //Returns the materia type
};
#endif
