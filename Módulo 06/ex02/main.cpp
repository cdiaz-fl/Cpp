/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 18:37:46 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/04/19 10:49:29 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	"Classes.hpp"
#include	<cstdint>

Base *generate(void){
	Base	*ptr;
	static int indx = 0;
	uintptr_t	i = reinterpret_cast<uintptr_t>(&i);
	uintptr_t	j = reinterpret_cast<uintptr_t>(&j);
	uintptr_t	k = reinterpret_cast<uintptr_t>(&k);
	char			take;

	//My random 🤕
	i %= 10;
	j %= 10;
	k %= 10;

	while (i > 2)
		i /= 3;
	while (j > 2)
		j /= 3;
	while (k > 2)
		k /= 3;

	std::cout << "i is " << i << "\n";
	std::cout << "j is " << j << "\n";
	std::cout << "k is " << k << "\n";

	if (indx == 0)
	{
		if (i == 0)
			take = 'a';
		else if (i == 1)
			take = 'b';
		else
			take = 'c';
	}

	if (indx == 1)
	{
		if (j == 0)
			take = 'a';
		else if (j == 1)
			take = 'b';
		else
			take = 'c';
	}

	if (indx == 2)
	{
		if (k == 0)
			take = 'a';
		else if (k == 1)
			take = 'b';
		else
			take = 'c';
	}

	//End of my random 💩

	if (take == 'a')
		ptr = new A();
	else if (take == 'b')
		ptr = new B();
	else
		ptr = new C();
	indx++;
	return ptr;
}

void identify(Base *p){
	A	*childA = NULL;
	B	*childB = NULL;
	C	*childC = NULL;

	childA = dynamic_cast<A *>(p);
	if (childA != NULL)
	{
		std::cout << "This class is of type A\n";
		return ;
	}
	childB = dynamic_cast<B *>(p);
	if (childB != NULL)
		std::cout << "This class is of type B\n";
	childC = dynamic_cast<C *>(p);
	if (childC != NULL)
		std::cout << "This class is of type C\n";
}

int	main(){
	Base	*base_ptr = generate();

	identify(base_ptr);
	delete base_ptr;
	std::cout << "-------------------\n";
	base_ptr = generate();
	identify(base_ptr);
	delete base_ptr;
	std::cout << "-------------------\n";
	base_ptr = generate();
	identify(base_ptr);
	delete base_ptr;
	return 0;
}
