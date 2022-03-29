/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdiaz-fl <cdiaz-fl@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:24:51 by cdiaz-fl          #+#    #+#             */
/*   Updated: 2022/03/16 18:52:57 by cdiaz-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Bad arguments!\n";
		return (1);
	}

	//Set values
	std::string	fname(argv[1]);	
	std::string	s1(argv[2]);	
	std::string	s2(argv[3]);	
	std::size_t	ls1 = s1.size();

	//Read
	std::ifstream	fread(fname);
	if (!fread.is_open())
	{
		std::cout << fname << " file doesn't exist!\n";
		return (1);
	}
	
	//Write
	fname += ".replace";
	std::ofstream	file(fname);
	std::string	line;

	if (!file.is_open())
	{
		std::cout << "couldn't create the new file!\n";
		return (1);
	}

	while (std::getline(fread, line))
	{
		std::size_t	found = line.find(s1);
		while (found != std::string::npos)
		{
			line.erase(found, ls1);	
			line.insert(found, s2);
			found = line.find(s1);
		}
		file << line << std::endl;
	}

	//Close
	fread.close();
	file.close();
	return (0);
}
