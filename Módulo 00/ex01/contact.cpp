/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 22:20:18 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/14 11:14:39 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"contact_book.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){

}

void	Contact::setvalue(size_t nb){
	std::string	buff;

	// Index
	this->_index = nb;

	// First Name
	std::cout << std::setw(17) << "First Name: ";
	std::cin >> buff;
	this->_first_name = buff;
	
	// Last Name
	std::cout << std::setw(17) << "Last Name: ";
	std::cin >> buff;
	this->_last_name = buff;

	// Nickname
	std::cout << std::setw(17) << "Nickname: ";
	std::cin >> buff;
	this->_nickname = buff;

	// Phone
	std::cout << std::setw(17) << "Phone: ";
	std::cin >> buff;
	this->_phone = buff;

	// Darkest Secret
	std::cout << std::setw(17) << "Darkest Secret: ";
	std::cin >> buff;
	this->_darkest_secret = buff;
}

void	Contact::showvalues(void)const{
	// First Name
	std::cout << std::setw(10) << this->_index << "|";
	if (this->_first_name.size() >= 10)
		std::cout << std::setw(9) << this->_first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->_first_name << "|";

	// Last Name
	if (this->_last_name.size() >= 10)
		std::cout << std::setw(9) << this->_last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->_last_name << "|";

	// Nickname
	if (this->_nickname.size() >= 10)
		std::cout << std::setw(9) << this->_nickname.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << this->_nickname;
	std::cout << std::endl;
}

void	Contact::showall(void)const{
	std::cout << std::endl;
	std::cout << std::setw(17) << "First Name: " << this->_first_name << std::endl;
	std::cout << std::setw(17) << "Last Name: " << this->_last_name << std::endl;
	std::cout << std::setw(17) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::setw(17) << "Phone: " << this->_phone << std::endl;
	std::cout << std::setw(17) << "Darkest Secret: " << this->_darkest_secret << std::endl;
}
