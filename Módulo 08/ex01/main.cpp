/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 11:11:13 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/06/06 13:13:24 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"span.hpp"
#include	<iostream>

int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(12);
	sp.addNumber(9);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	Span	sp_two;
	sp_two.addNumber(-12);
	std::cout << sp_two.shortestSpan() << std::endl;
	std::cout << sp_two.longestSpan() << std::endl;


	std::cout << "--------------------\n";
	Span	better(1000);
	int	vals[1000];

	for (int i = 0; i < 1000; i++)
		vals[i] = i;
	vals[999] = 2000;
	better.insertion(vals, 1000);
	std::cout << better.shortestSpan() << std::endl;
	std::cout << better.longestSpan() << std::endl;

	return (0);
}
