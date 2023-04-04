/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 06:29:32 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include	<iostream>

class	WrongAnimal{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const & copy);
	~WrongAnimal();
	WrongAnimal &	operator =(WrongAnimal const & rhs);
	std::string	getType()const;
	void makeSound()const;
protected:
	std::string	_type;
};
#endif
