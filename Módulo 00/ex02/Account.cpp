// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include	"Account.hpp"
#include	<iostream>
#include	<iomanip>

Account::Account(int initial_deposit){
	static int	index = 0;

	this->_accountIndex = index;
	this->_amount = initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created\n";
	index++;
	this->_totalAmount += initial_deposit;
	this->_nbAccounts += 1;
}

Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed\n";

}

// Getters

int	Account::getNbAccounts( void ){
	return Account::_nbAccounts;
}
int	Account::getTotalAmount( void ){
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void ){
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return Account::_totalNbWithdrawals;
}


//Time
void	Account::_displayTimestamp( void ){
	time_t	timer = std::time(&timer);
	struct tm *info = std::localtime(&timer);


	std::cout << "[" << std::setfill('0') << std::setw(4) << info->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << info->tm_mon + 1;
	std::cout << std::setfill('0') << std::setw(2) << info->tm_mday << "_";
	std::cout << std::setfill('0') << std::setw(2) << info->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << info->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << info->tm_sec << "] ";
}


//Display Info
void	Account::displayAccountsInfos( void ){

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}





//Initializing non-member functions

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;



//Secondary functions
void	Account::makeDeposit(int deposit){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << "\n";
	this->_totalNbDeposits += 1;
	this->_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (this->_amount - withdrawal > 0)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals += 1;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << "\n";
		this->_totalNbWithdrawals += 1;
		return (true);
	}
	else
	{
		std::cout << "refused\n";
		return (false);
	}

}


int		Account::checkAmount( void ) const{
	return (this->_amount);
}

void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << "\n";
}
