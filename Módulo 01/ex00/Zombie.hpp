/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:40:34 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/15 10:41:27 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	ZOMBIE_HPP
# define	ZOMBIE_HPP

#include	<iostream>

class Zombie{
public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
private:
	std::string		_name;			
};

void 			randomChump(std::string name);
Zombie*		newZombie(std::string name);

#endif
