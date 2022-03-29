/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:24:11 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 18:12:37 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Karen.hpp"

int	main(){
	Karen	real_karen;

	real_karen.complain("PEPE");
	real_karen.complain("WARNING");
	real_karen.complain("ERROR");
	real_karen.complain("INFO");
	real_karen.complain("DEBUG");

	return (0);
}

