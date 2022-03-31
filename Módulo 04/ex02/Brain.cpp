/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:42:32 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 07:42:55 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	"Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called!\n";
}

Brain::Brain(Brain const & copy){
	std::cout << "Brain copy constructor called!\n";
	*this = copy;
}

Brain::~Brain(){
	std::cout << "Brain default destructor called!\n";
}

Brain &	Brain::operator =(Brain const & rhs){
	if (this != &rhs)
	{
		for (int i = 0; i < 100 ; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}

std::string	Brain::get_idea(int i)const{
	if (i < 0 || i > 99)
		return NULL;
	return this->_ideas[i];
}

int	Brain::set_idea(int i, std::string idea){
	if (i < 0 || i > 99)
		return 0;
	this->_ideas[i] = idea;
	return 1;
}
