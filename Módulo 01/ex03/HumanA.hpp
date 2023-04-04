/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:00:35 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 10:19:29 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	HUMANA_HPP
# define	HUMANA_HPP

#include	"Weapon.hpp"

class	HumanA{
public:
	HumanA(std::string name, Weapon &gun);
	~HumanA(void);
	void	attack(void)const;
private:
	std::string	_name;
	Weapon	&_gun;
};

#endif
