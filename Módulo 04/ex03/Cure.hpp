/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:46:42 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 11:01:21 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
# define	CURE_HPP

#include	"AMateria.hpp"

class	Cure : public AMateria{
private:
	std::string	_type;
public:
	Cure();
	Cure(Cure const & copy);
	~Cure();
	Cure &	operator =(Cure const & rhs);
	std::string const & getType() const; //Returns the materia type
};
#endif
