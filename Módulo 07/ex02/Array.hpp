/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 11:47:48 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/03 12:24:38 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include	<cstdlib>
#include	<iostream>

template <typename T>
class	Array{
	public:

		//			CONSTRUCTORS & DESTRUCTOR

		Array() : _array(new T[0]), _size(0) {std::cout << "Default arr created\n";}

		Array(unsigned int n) : _array(new T[n]), _size(n)
		{
			std::cout << "Sized arr created\n";
			for (size_t i = 0; i < n; i++)
				std::cout << this->_array[i] << " ";
			std::cout << "\n";
		}

		Array(Array const &copy) : _size(0)
		{
			std::cout << "--- Copy Constructor called! ---\n";
			*this = copy;
		}

		~Array(){delete []this->_array;}


		//			EXCEPTION
		class Outofrange : std::exception
		{
			public:
			const char *what(void) const throw()
			{
				return ("Such index is out of array range\n");
			}
		};


		//			OVERLOADS
		Array	&	operator =(Array const &rhs)
		{
			std::cout << "--- = overload called! ---\n";
			if (this != &rhs)
			{
				if (this->_size)
					delete [] this->_array;
				this->_array = new T(rhs._size);
				this->_size = rhs._size;
				for (size_t i = 0; i < rhs._size; i++)
					this->_array[i] = rhs._array[i];
			}
			return *this;
		}


		T & operator [](size_t i)const
		{
			try
			{
				if (i >= this->_size)
					throw Outofrange();
				return (this->_array[i]);
			}
			catch(Outofrange & out)
			{
				std::cerr << out.what();
				return (this->_array[i]);
			}
			return (this->_array[i]);
		}


		//			FUNCTIONS
		size_t	size(void) const	{return this->_size;}

	private:
		T				*_array;
		size_t	_size;
};

#endif
