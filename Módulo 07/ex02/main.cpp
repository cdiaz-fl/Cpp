/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 10:09:04 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/03 12:23:00 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Array.hpp"

class Awesome {
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

int	main(void)
{
	Array<int>	pepe;
	Array<char>	paco(12);

	std::cout << "The size of pepe is "<< pepe.size() << "\n";
	std::cout << "The size of paco is "<< paco.size() << "\n";

	for(size_t i = 0; i < paco.size(); i++)
		paco[i] = i + 65;

	std::cout << "paco = ";
	for(size_t i = 0; i < paco.size(); i++)
		std::cout << paco[i];
	std::cout << "\n";


	Array<char>	juan(paco);
	std::cout << "The size of juan is "<< juan.size() << "\n";
	std::cout << "juan = ";
	for(size_t i = 0; i < juan.size(); i++)
		std::cout << juan[i];
	std::cout << "\n";

	juan[13];
	juan[0] = 'Z';

	std::cout << "juan = ";
	for(size_t i = 0; i < juan.size(); i++)
		std::cout << juan[i];
	std::cout << "\n";

	std::cout << "paco = ";
	for(size_t i = 0; i < paco.size(); i++)
		std::cout << paco[i];
	std::cout << "\n";


	Array<Awesome>	aw(3);


	return (0);
}
