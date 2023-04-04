/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:42:38 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/18 19:57:13 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Data.hpp"

Data::Data() : _value(0){
}

Data::Data(int val) : _value(val){
}

Data::Data(Data const & copy){
	*this = copy;
}

Data::~Data(){
}

int	Data::getval()const{
	return this->_value;
}

Data &	Data::operator =(Data const & rhs){
	if (this != &rhs)
		this->_value = rhs.getval();
	return *this;
}
