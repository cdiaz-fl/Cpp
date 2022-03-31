/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/30 10:13:21 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include	<iostream>
#include	"WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(WrongCat const & copy);
	~WrongCat();
	WrongCat &	operator =(WrongCat const & rhs);
	std::string	getType()const;
	void makeSound()const;
protected:
	std::string	_type;
};
#endif
