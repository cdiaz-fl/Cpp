/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:11:30 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/06 13:09:42 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"span.hpp"
#include	<iostream>


Span::Span() : _size_left(0){
}

Span::Span(unsigned int n) : _size_left(n){
}

Span::Span(Span const &copy){
	*this = copy;
}

Span::~Span(){
}


void	Span::addNumber(int nb){
	try
	{
		if (this->_size_left <= 0)
			throw	Span::No_space_left(); 
		this->_size_left--;
		this->_values.push_back(nb);
	}
	catch(No_space_left & no)
	{
		std::cerr << no.what();
	}
}

void	Span::insertion(int *val, int size){
	try
	{
		if (this->_size_left < (unsigned int)size)
			throw	Span::No_space_left(); 
		std::list<int>::const_iterator it = _values.begin();
		while (--size >= 0)
			this->_values.insert(it, val[size]);
	}
	catch(No_space_left & no)
	{
		std::cerr << no.what();
	}
}

int 	Span::shortestSpan(void)const{
	try
	{
		if (_values.size() <= 1)
			throw Span::No_numbers_to_compare();
		int	span;
		int min = this->_values.front() - this->_values.back();
		if (min < 0)
			min *= -1;
		for (std::list<int>::const_iterator iti = _values.begin(); iti != _values.end(); ++iti)
		{
			for (std::list<int>::const_iterator itj = _values.begin(); itj != _values.end(); ++itj)
			{
				span = *iti - *itj;
				if (span < 0)
					span *= -1;
				if (span > 0 && span < min)
					min = span;
			}
		}
		return (min);
	}
	catch(No_numbers_to_compare & no)
	{
		std::cerr << no.what();
		return (-1);
	}
}

int		Span::longestSpan(void)const{
	try
	{
		if (_values.size() <= 1)
			throw Span::No_numbers_to_compare();
		int	span;

		span = *max_element(this->_values.begin(), this->_values.end());
		span -= *min_element(this->_values.begin(), this->_values.end());
		return (span);
	}
	catch(No_numbers_to_compare & no)
	{
		std::cerr << no.what();
		return (-1);
	}
}

void	Span::print(void)const{
	for (std::list<int>::const_iterator it; it != _values.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << "\n";
}

Span &	Span::operator=(Span const &rhs){
	if (this != &rhs)
	{
		this->_size_left = rhs._size_left;
		this->_values = rhs._values;
	}
	return (*this);
}
