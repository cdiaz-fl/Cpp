/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:37:46 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/18 19:57:16 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Data.hpp"

uintptr_t serialize(Data *ptr){

	uintptr_t	result = reinterpret_cast<uintptr_t>(ptr);
	return	result;
}

Data *deserialize(uintptr_t raw){
	Data	*new_ptr = new Data();
	Data	*given = reinterpret_cast<Data *>(raw);
	*new_ptr = *given;
	return new_ptr;
}

int	main(){
	Data	pepe(-1);

	std::cout << "Pepe " << &pepe << "\n";
	std::cout << "Pepe's val " << pepe.getval() << "\n";
	std::cout << "Pepe's address in uintptr " << serialize(&pepe) << "\n";
	std::cout << "Pepe " << reinterpret_cast<Data *>(serialize(&pepe)) << "\n";
	std::cout << "--------------------------- \n";
	
	Data	*new_ptr = deserialize(reinterpret_cast<uintptr_t>(&pepe));
	std::cout << "New " << new_ptr << "\n";
	std::cout << "New's val " << new_ptr->getval() << "\n";
	std::cout << "New's address in uintptr " << serialize(new_ptr) << "\n";
	std::cout << "New " << reinterpret_cast<Data *>(serialize(new_ptr)) << "\n";
	delete new_ptr;
	return 0;
}
