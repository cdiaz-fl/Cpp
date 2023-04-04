/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_book.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:37:53 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/14 11:21:09 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_BOOK_HPP
# define	CONTACT_BOOK_HPP
#include	<iostream>
#include	<iomanip>

class	Contact {
public:
	Contact(void);
	~Contact(void);
	void	setvalue(size_t nb);
	void	showvalues(void)const;
	void	showall(void)const;
private:
	size_t			_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone;
	std::string	_darkest_secret;
};

class	PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);
		size_t	getcontactnb(void)const;
		void		setcontacts(void);
		void		displaycontact(int contact)const;
		void		getcontacts(void)const;
	private:
		Contact	_all[8];
		size_t	_contact_nb;
		size_t	_total_nb;
};

#endif
