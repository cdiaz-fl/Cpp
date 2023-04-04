/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 08:41:53 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/02 11:10:17 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"easyfind.hpp"
#include	<iostream>

void print_elem(int i)
{
	std::cout << i << " ";
}

int	main(void)
{
	std::vector<int> pepe(5, 10);
	std::vector<int> paco(8, 7);

	pepe[3] = 5;

	for_each(pepe.begin(), pepe.end(), print_elem);
	std::cout << "\n";
	for_each(paco.begin(), paco.end(), print_elem);
	std::cout << "\n";

	std::cout << "First occurence is in element " << easyfind(pepe, 5) << "\n";
	std::cout << "First occurence is in element " << easyfind(paco, 5) << "\n";

	
	std::list<int> list_all(5, 9);
	list_all.push_back(0);
	for_each(list_all.begin(), list_all.end(), print_elem);
	std::cout << "\n";
	std::cout << "First occurence is in element " << easyfind(list_all, 0) << "\n";

	std::deque<int> deck(4, 2);
	for_each(deck.begin(), deck.end(), print_elem);
	std::cout << "\n";

	std::cout << "First occurence is in element " << easyfind(deck, 4) << "\n";

	return (0);
}
