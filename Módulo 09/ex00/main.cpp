/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 06:26:25 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2023/04/04 18:07:27 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"BitcoinExchange.hpp"
#include	<iostream>

//	Calculating with input values

int	check_real_date(std::string &date){
	int	yy;
	int	mm;
	int	dd;

	yy = std::strtod(line.substr(0, 2).c_str(), NULL);
	mm = std::strtod(line.substr(3, 2).c_str(), NULL);
	dd = std::strtod(line.substr(6, 2).c_str(), NULL);
	if (yy < 2009)
		return (1);
	else if (mm < 1 || )
	return (0);
}

int	line_parser(std::string const & line, float *qty){
	int i;
	int	counted;
	int size = line.size();
	std::string max("1000");

	if (size < 13 || size > 16)	//Checks the min and max lenght of line
		return (3);
	for (std::string::const_iterator it = line.begin(); it != line.end(); ++it)
	{
		i = std::distance(line.begin(), it);

		if (((i == 4 || i == 7) && *it == '-') || //Check date -
				(i == 11 && *it == '|') || //Check pipe
				((i == 10 || i == 12) && *it == ' ') || //Check spaces
				(i > 13 && *it == '.') || //Check dot
				(i == 13 && *it == '-')) //Check negative 
			counted = 0;
		else if (!std::isdigit(*it))
			return (3);
	}
	if (std::count(line.begin(), line.end(), '.') > 1) //Check qty of .
		return (3);
	counted = std::count(line.begin(), line.end(), '-');
	if (counted > 3) //Check qty of -
		return (3);
	if (counted == 3) //Check negative value
		return (1);
	if (line.substr(13, (size - 13)) > max) //Check large number
		return (2);
	if (!check_real_date(line)	//Check real date
		return (3)
	return (0);	
}

void	calculate_input_result(BitcoinExchange & btc){
	std::string	line;
	int					err_no;
	float				quantity;
	std::map<std::string, float>::const_iterator	it;

	while (std::getline(*(btc.get_input_file()), line))
	{
		err_no = line_parser(line, &quantity);
		if (err_no == 0)
		{
			it = btc.get_db_values()->lower_bound(line.substr(0, 10));
			std::cout << line.substr(0, 10) <<  " => " << quantity << " = " << it->second;
		}
		else if (err_no == 1)
			std::cout << "Error: not a positive number.\n";
		else if (err_no == 2)
			std::cout << "Error: too large number.\n";
		else
			std::cout << "Error: bad input => " << line << "\n";
	}
}


//	Saving values of the database in a map

bool	validate_db_chars(char c){
	if (std::isdigit(c) || c == '-' || c == ',' || c == '.')
		return (true);
	return (false);
}

int	db_line_parser(std::string const & line, std::string *date, float * val){
	if (!std::all_of(line.begin(), line.end(), validate_db_chars))
		return (1);
	*date = line.substr(0, 10);
	*val = std::strtod(line.substr(11, line.size()).c_str(), NULL);
	return (0);
}

void	save_db_values(BitcoinExchange &btc){
	std::string	line;
	std::map<std::string, float>	values;
	std::string	date;
	float	val;

	while (std::getline(*(btc.get_db_file()), line))
	{
		if (!db_line_parser(line, &date, &val))
			btc.set_db_values(date, val);
	}
	std::cout << "Dictionary is: \n";
	for (std::map<std::string, float>::const_iterator it = btc.get_db_values()->begin(); it != btc.get_db_values()->end(); ++it)
		std::cout << it->first << " : " << it->second << "\n";
}


//	Error Handling

int	error_ctrl(int *argc, char ***argv, BitcoinExchange &btc){
	if (*argc != 2)	//Check if it's only one argument
	{
		std::cerr << "Error: could not open file.\n";
		return (1);
	}

	//Check if file exists
	if (btc.set_input_file(argv[0][1]))
		return (1);

	//Check if database file exist
	if (btc.set_db_file(DB_NAME))
		return (1);

	return (0);
}


int	main(int argc, char **argv){
	BitcoinExchange	btc;

	if (error_ctrl(&argc, &argv, btc))
		return (1);
	save_db_values(btc);
	calculate_input_result(btc);
	return (0);
}
