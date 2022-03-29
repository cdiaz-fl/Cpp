/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:12:24 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/14 11:20:42 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"contact_book.hpp"

PhoneBook::PhoneBook(void){
	this->_contact_nb = 0;
	this->_total_nb = 0;
}

PhoneBook::~PhoneBook(void){

}

void	PhoneBook::setcontacts(void){
	Contact new_contact;

	if (this->_contact_nb > 7)
		this->_contact_nb = 0;
	this->_contact_nb++;
	if (this->_total_nb < 8)
		this->_total_nb++;
	new_contact.setvalue(this->_contact_nb);
	this->_all[this->_contact_nb - 1] = new_contact;	
}

void	PhoneBook::getcontacts(void)const{
	size_t	i = 0;

	if (!this->_contact_nb)
	{
		std::cout << "ContactBook is empty...\n";
		return ;
	}	
	std::cout << std::right;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first_name" << "|";
	std::cout << std::setw(10) << "last_name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;;
	while (i < this->_total_nb)
	{
		this->_all[i].showvalues();
		i++;
	}
	std::cout << std::endl << std::left;
}

void	PhoneBook::displaycontact(int contact)const{
	if ((contact < 1 || contact > 8) || (this->_total_nb < (size_t)contact))
	{
		std::cout << "No such contact..." << std::endl;
		return ;
	}
	this->_all[contact - 1].showall();
}

size_t	PhoneBook::getcontactnb(void)const{
	return this->_contact_nb;
}
