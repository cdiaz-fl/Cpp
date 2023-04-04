/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:29:47 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/03 12:15:27 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"iter.hpp"

/*
class Awesome {
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {
	int tab[] = { 0, 1, 2, 3, 4 }; 
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
*/


template <typename T>
void	my_function(T &value)
{
	value += 1;
}

int main(void)
{
	char		char_array[6] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int			int_array[6] = {1, 2, 3, 4, 5, 6};
	size_t	lenght = 6;

	
	std::cout << char_array << "\n";
	for (size_t i = 0; i < lenght; i++)
		std::cout << int_array[i];
	std::cout << "\n";

	iter(char_array, lenght, my_function);
	iter(int_array, lenght, my_function);

	std::cout << char_array << "\n";
	for (size_t i = 0; i < lenght; i++)
		std::cout << int_array[i];
	std::cout << "\n";

	return (0);
}

