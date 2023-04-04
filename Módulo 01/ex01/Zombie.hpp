/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:40:34 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/15 10:43:27 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	ZOMBIE_HPP
# define	ZOMBIE_HPP

#include	<iostream>

class Zombie{
public:
	Zombie(void);
	~Zombie(void);
	void		announce(void);
	void		setname(std::string name);
private:
	std::string		_name;			
};

Zombie* zombieHorde( int N, std::string name );

#endif
