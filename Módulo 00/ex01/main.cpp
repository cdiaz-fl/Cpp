/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_book.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 11:27:18 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/14 11:15:15 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"contact_book.hpp"
//#include	<cstdlib>

int	main(void)
{
	PhoneBook	all;
	std::string	readed;
	char	buff[2];
	
	buff[1] = '\0';
	while (1)
	{
		std::cin >> readed;
		std::cout << std::left << std::endl;
		if (!readed.compare("EXIT"))
			return (0);
		else if (!readed.compare("ADD"))
			all.setcontacts();
		else if (!readed.compare("SEARCH"))
		{
			all.getcontacts();
			if (all.getcontactnb())
			{
				std::cout << "\nSelect a contact: ";
				std::cin >> buff;
				all.displaycontact(atoi(buff));
			}
		}
		std::cout << "\n-----------------------------\n";
	}
	return (0);
}
