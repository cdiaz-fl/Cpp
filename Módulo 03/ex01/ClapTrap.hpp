/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 09:24:27 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:13:55 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define	CLAPTRAP_HPP

#include	<iostream>	

class ClapTrap{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();
	ClapTrap &	operator=(ClapTrap const & rhs);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	get_name(void)const;
	int	get_hit_points(void)const;
	int	get_energy_points(void)const;
	int	get_attack_damage(void)const;
	void	set_name(std::string vale);
	void	set_hit_points(int val);
	void	set_energy_points(int val);
	void	set_attack_damage(int val);
protected:
	std::string	_name;
	int	_hit_points;
	int	_energy_points;
	int	_attack_damage;
};
std::ostream &	operator<<(std::ostream & o, ClapTrap const & src);
#endif
