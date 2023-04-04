/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 08:55:06 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 07:43:06 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include	<iostream>
#include	"Animal.hpp"
#include	"Brain.hpp"

class	Cat : public Animal{
public:
	Cat();
	Cat(Cat const & copy);
	~Cat();
	Cat &	operator =(Cat const & rhs);
	void	have_ideas(std::string id1, std::string id2, std::string id3);
	void	print_status()const;
	virtual	std::string	getType()const;
	virtual void makeSound()const;
protected:
	std::string	_type;
private:
	Brain* _brain;
};
#endif
