#ifndef	BITCOINEXCHANGE_HPP
# define	BITCOINEXCHANGE_HPP

#include	<map>
#include	<string>
#include	<algorithm>
#include	<fstream>

#define	DB_NAME "data.csv"

class	BitcoinExchange{
	private:
		std::ifstream								*_input;
		std::ifstream								*_DBfile;
		std::map<std::string, float>	*_DBvalues;

	public:

		//Constructors & Destructors
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &copy);
		~BitcoinExchange();

		//Getters & Setters
		int		set_input_file(char const *fname);
		int		set_db_file(char const *db_name);
		int		set_db_values(std::string &date, float & values);
		std::ifstream	*	get_input_file()const;
		std::ifstream	*	get_db_file()const;
		std::map<std::string, float> *	get_db_values()const;


		//Overloads
		BitcoinExchange	&operator=(BitcoinExchange const &rhs);

		//Exceptions
		class	InputException : public std::exception{
			public:
			const char* what() const throw(){
				return ("Error: could not open file!\n");
			}
		};
		
		class	DBException : public std::exception{
			public:
			const char* what() const throw(){
				return ("Error: could not open database file!\n");
			}
		};


};

#endif

