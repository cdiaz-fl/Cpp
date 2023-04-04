/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:00:35 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 10:19:23 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	HUMANB_HPP
# define	HUMANB_HPP

#include	"Weapon.hpp"

class	HumanB{
public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void)const;
	void	setWeapon(Weapon &gun);
private:
	std::string	_name;
	Weapon	*_gun;
};

#endif
