/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 10:46:43 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 19:05:37 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<iostream>

int	main(){
	std::string	str("HI THIS IS BRAIN");
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << &str << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;
	std::cout << *(ptr) << std::endl;
	std::cout << ref << std::endl;
}
