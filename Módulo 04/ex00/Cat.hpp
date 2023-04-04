/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 06:25:54 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include	<iostream>
#include	"Animal.hpp"

class	Cat : public Animal{
public:
	Cat();
	Cat(Cat const & copy);
	~Cat();
	Cat &	operator =(Cat const & rhs);
	virtual	std::string	getType()const;
	virtual void makeSound()const;
protected:
	std::string	_type;
};
#endif
