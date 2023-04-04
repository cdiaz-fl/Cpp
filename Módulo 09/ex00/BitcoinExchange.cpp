/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange_class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:38:19 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2023/04/04 10:28:26 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"BitcoinExchange.hpp"
#include	<iostream>

//Constructors & Destructors

BitcoinExchange::BitcoinExchange(){

	_input = new std::ifstream();
	_DBfile = new std::ifstream();
	_DBvalues = new std::map<std::string, float>();
}


BitcoinExchange::BitcoinExchange(BitcoinExchange const &copy) {
	*this = copy;
}


BitcoinExchange::~BitcoinExchange() {
	if (_input->is_open())
		_input->close();
	if (_DBfile->is_open())
		_DBfile->close();

	delete	_input;
	delete	_DBfile;
	delete	_DBvalues;
}


//Getters & Setters
int		BitcoinExchange::set_input_file(char const *fname){
	try {
		if (!_input->is_open())
		{
			_input->open(fname, std::ifstream::in);
			if (!_input->is_open())
				throw BitcoinExchange::InputException();
		}
		else
			return (1);
	}
	catch (InputException & msg){
		std::cerr << msg.what();
		return (1);
	}
	return (0);
}

int		BitcoinExchange::set_db_file(char const * dbname){
	try {
		if (!_DBfile->is_open())
		{
			_DBfile->open(dbname, std::ifstream::in);
			if (!_DBfile->is_open())
				throw BitcoinExchange::DBException();
		}
		else
			return (1);
	}
	catch (DBException & msg){
		std::cerr << msg.what();
		return (1);
	}
	return (0);
}

int		BitcoinExchange::set_db_values(std::string	& date, float & val){
	_DBvalues->insert(std::make_pair(date, val));
	return (0);
}

std::ifstream	* BitcoinExchange::get_input_file()const{ return	(_input); }

std::ifstream *	BitcoinExchange::get_db_file()const{ return	(_DBfile); }

std::map<std::string, float>	* BitcoinExchange::get_db_values()const{ return (_DBvalues); }


//Overloads

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs) {
	if (this != &rhs)
	{
		/*
		if (_input->is_open())
			_input->close();
		if (_DBfile->is_open())
			_DBfile->close();
		delete	_input;
		delete	_DBfile;
		*/
		delete	_DBvalues;

		/*
		_input = new std::ifstream(*(rhs.get_input_file()));
		_DBfile = new std::ifstream(rhs.get_db_file());
		*/
		_input->swap(*(rhs.get_input_file()));
		_DBfile->swap(*(rhs.get_db_file()));
		_DBvalues = new std::map<std::string, float>(*(rhs.get_db_values()));
	}
	return *this;
}

