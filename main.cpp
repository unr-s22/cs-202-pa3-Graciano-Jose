//Names: Jose Graciano
//Date: 3/24/2022
//Programming Assignment #3

#include <iostream>
#include <string>

#include "Account.h"
#include "Money.h"

int main(){
	
	Money startBalance(300, 23);
	Account A(startBalance);
	std::cout << A << std::endl;
	
	A.makeDeposit(Money(200, 00));
	A.makeDeposit(Money(300, 24));
	A.makeDeposit(Money(501, 22));
	std::cout << A << std::endl;
	
	A.makeWithdrawals(Money(300, 10));
	A.makeWithdrawals(Money(201, 34));
	std::cout << A << std::endl;
	std::cout << std::endl;
	
	//math and relational operator check
	Money operatorCheck;
	std::cout << operatorCheck.testOperators() << std::endl;
	return 0;
}

