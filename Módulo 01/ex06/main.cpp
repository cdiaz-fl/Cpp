/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:24:11 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 18:41:32 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Karen.hpp"

int	main(int argc, char **argv){
	Karen	real_karen;

	switch (argc){
		case 1: std::cout << "I am not sure how tired I am today...\n"; break;
		case 2:	real_karen.complain(argv[1]); break;
	}

	return (0);
}

