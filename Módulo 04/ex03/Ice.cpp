/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 10:50:53 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/31 11:30:05 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Ice.hpp"

Ice::Ice() : _type("ice"){
}

Ice::Ice(Ice const & copy){
	*this = copy;
}

Ice::~Ice(){
}

Ice &	Ice::operator=(Ice const & rhs){
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}

std::string	const & Ice::getType()const{
	return	this->_type;
}
