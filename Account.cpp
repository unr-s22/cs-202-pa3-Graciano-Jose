#include <iostream>
#include <vector>

#include "Account.h"
#include "Money.h"

//constructor
Account::Account(Money M){
	balance = M.getBalance();
}


//methods
void Account::makeDeposit(Money obj){
	deposits.push_back(obj);
	balance += obj.getBalance();
}
	
void Account::makeWithdrawals(Money obj){
	withdrawals.push_back(obj);
	balance -= obj.getBalance();
}


//overloading operators
std::ostream &operator<<(std::ostream& out, const Account& A){
	int count = 1;
	out << "Account Details" << std::endl;
	out << "--------------------------" << std::endl;
	out << "Current Balance: $" << A.balance << std::endl;
	out << "--------------------------" << std::endl;
	out << "Number of Deposits: " << A.deposits.size() << std::endl;
	out << "--------------------" << std::endl;
	//for loop to iterate over deposits vector here
	for(auto d: A.deposits){
		out << "(" << count++ << ") " << d << std::endl;
	}
	out << "--------------------------" << std::endl;
	out << "Number of Withdrawals: " << A.withdrawals.size() << std::endl;
	out << "--------------------------" << std::endl;
	count = 1;
	//loop to iterate over withdrawals vector here
	for(auto w: A.withdrawals){
		out << "(" << count++ << ") "<< w << std::endl;
	}
	out << std::endl;
	return out;
}

