/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 08:49:42 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 07:16:37 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include	"ClapTrap.hpp"
#include	"ScavTrap.hpp"

class	FragTrap : virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap();
	FragTrap &	operator =(FragTrap const & rhs);
	void highFivesGuys(void);
	void print_status(void)const;
protected:
	int	_attack_damage;
};
#endif
