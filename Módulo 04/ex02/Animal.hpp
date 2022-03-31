/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 07:54:08 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include	<iostream>

class	Animal{
public:
	Animal();
	Animal(Animal const & copy);
	virtual ~Animal();
	Animal &	operator =(Animal const & rhs);
	virtual void	have_ideas(std::string id1, std::string id2, std::string id3) = 0;
	virtual void	print_status()const = 0;
	virtual	std::string	getType()const;
	virtual void makeSound()const = 0;
protected:
	std::string	_type;
};
#endif
