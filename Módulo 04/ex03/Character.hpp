/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:08:31 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 11:26:18 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
# define	CHARACTER_HPP

#include	"ICharacter.hpp"
#include	"AMateria.hpp"

class	Character : public	ICharacter{
private:
	std::string	_name;
	AMateria[4]	_materia;
public:
	Character();
	Character(std::tring name);
	Character(Character const & copy);
	~Character();
	Character	&	operator =(Character const & rhs);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
}

#endif
