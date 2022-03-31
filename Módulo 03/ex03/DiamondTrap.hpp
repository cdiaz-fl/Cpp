/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:59:53 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:27:07 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"
#include	"FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & copy);
	~DiamondTrap();
	DiamondTrap &	operator =(DiamondTrap const & rhs);
	void	set_diamond_name(std::string val);
	void whoAmI();
	void	print_status(void)const;
	using ScavTrap::attack;
private:
	std::string	_name;
	using FragTrap::_attack_damage;
	using FragTrap::_hit_points;
};
#endif
