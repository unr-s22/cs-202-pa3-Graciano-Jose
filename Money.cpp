#include <iostream>
#include <string>
#include <sstream>

#include "Money.h"

//constructors
Money::Money(){
}

Money::Money(int newDollars, int newCents): cents(newCents), dollars(newDollars){
	balance = dollars + (cents * .01);
}


//method
std::string Money::testOperators(){
	std::stringstream ss;
	
	ss << "****Testing Operators****" << std::endl;
	Money t1(100, 48);
	Money t2(95, 26);
	
	ss << "t1: " << t1 << std::endl << "t2: " << t2 << std::endl;
	ss << "t1 + t2 = " << t1 + t2 << std::endl;
	ss << "t2 - t1 = " << t1 - t2 << std::endl;
	ss << std::endl;
	
	//testing relational operators
	if(t1 < t2){
		ss << t1 << " < " << t2 << " ?        True" << std::endl;
	}
	else{
		ss << t1 << " < " << t2 << " ?        False" << std::endl;
	}
	
	if(t1 > t2){
		ss << t1 << " > " << t2 << " ?        True" << std::endl;
	}
	else{
		ss << t1 << " > " << t2 << " ?        False" << std::endl;
	}
	
	if(t1 == t2){
		ss << t1 << " == " << t2 << " ?       True" << std::endl;
	}
	else{
		ss << t1 << " == " << t2 << " ?       False" << std::endl;
	}
	
	if(t1 != t2){
		ss << t1 << " != " << t2 << " ?       True" << std::endl;
	}
	else{
		ss << t1 << " != " << t2 << " ?       False" << std::endl;
	}
	
	if(t1 <= t2){
		ss << t1 << " <= " << t2 << " ?       True" << std::endl;
	}
	else{
		ss << t1 << " <= " << t2 << " ?       False" << std::endl;
	}
	
	if(t1 >= t2){
		ss << t1 << " >= " << t2 << " ?       True" << std::endl;
	}
	else{
		ss << t1 << " >= " << t2 << " ?       False" << std::endl;
	}

	std::string out = ss.str();
	return out;
}


//overloading operators
bool Money::operator<(const Money& rhs) const{
	return balance < rhs.balance;
}

bool Money::operator>(const Money& rhs) const{
	return balance > rhs.balance;
}

bool Money::operator<=(const Money& rhs) const{
	return balance <= rhs.balance;
}

bool Money::operator>=(const Money& rhs) const{
	return balance >= rhs.balance;
}

bool Money::operator==(const Money& rhs) const{
	return balance == rhs.balance;
}

bool Money::operator!=(const Money& rhs) const{
	return balance != rhs.balance;
}

float Money::operator+(const Money& rhs) const{
	float sum = 0.00;
	int centTotal = 0;
	centTotal = cents + rhs.cents;

	if(centTotal >= 100){
		sum = (centTotal/100) + ((centTotal % 100) * .01);
	}
	else{
		sum = centTotal * .01;
	}
	
	sum += dollars + rhs.dollars;
	return sum;
}

float Money::operator-(const Money& rhs) const{
	float difference = 0.00;
	int centTotal = 0;
	centTotal = cents - rhs.cents;

	if(centTotal < 0){
		difference = (centTotal/100) + ((centTotal % 100) * .01);
	}
	else if(centTotal < 0){
		difference = ((100 - (centTotal * -1)) *.01) -1;
	} 
	else{
		difference = centTotal * .01;
	}
	
	difference =  difference + dollars - rhs.dollars;
	return difference;
	
}

std::ostream &operator<<(std::ostream& out, const Money& M){
	out << "$" << M.dollars << "." << M.cents;
	return out;
}


//getter
double Money::getBalance(){
	return balance;
}

