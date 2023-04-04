/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 11:00:35 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 10:19:38 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	WEAPON_HPP
# define	WEAPON_HPP

#include	<iostream>

class	Weapon{
public:
	Weapon(std::string gun);
	~Weapon(void);
	void	setType(std::string type);
	std::string const	& getType(void) const;
private:
	std::string	_type;
};

#endif
