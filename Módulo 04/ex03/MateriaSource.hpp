/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 08:42:20 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 12:19:26 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MATERIASOURCE_HPP
# define	MATERIASOURCE_HPP

#include	"ICharacter.hpp"


class MateriaSource : public IMateriaSource{
public:
	MateriaSource();
	MateriaSource(MateriaSource const & copy);
	~MateriaSource();
	//MateriaSource	&	operator =(MateriaSource const & rhs);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};
#endif
