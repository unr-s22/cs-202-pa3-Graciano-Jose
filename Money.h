#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <string>

class Money{
private:
	int dollars = 0;
	int cents = 0;
	float balance;
	
public:
	Money();
	Money(int newDollars, int newCents);
	std::string testOperators();
	bool operator<(const Money& rhs) const;
	bool operator>(const Money& rhs) const;
	bool operator<=(const Money& rhs) const;
	bool operator>=(const Money& rhs) const;
	bool operator==(const Money& rhs) const;
	bool operator!=(const Money& rhs) const;
	float operator+(const Money& rhs) const;
	float operator-(const Money& rhs) const;
	friend std::ostream &operator<<(std::ostream& out, const Money& M);
	double getBalance();
};

#endif
