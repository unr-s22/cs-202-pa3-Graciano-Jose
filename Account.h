#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <vector>

#include "Money.h"

class Account{
private:
	float balance;
	std::vector<Money> deposits;
	std::vector<Money> withdrawals; 

public:
	Account(Money M);
	void makeDeposit(Money obj);
	void makeWithdrawals(Money obj);
	friend std::ostream &operator<<(std::ostream& out, const Account& A);
};

#endif
