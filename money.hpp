/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#ifndef MONEY_H
#define MONEY_H

#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::ostringstream;
using std::ostream;
using std::cin;
using std::string;

class Money{
public:
	// Constructor and destructor.
	Money(int, int);
	~Money();

	// Accessor & Mutator functions.
	void setDollar(int);
	void setChange(int);
	int getDollar();
	int getChange();

	// Validator
	void moneyValidator();

	// Extra Money Functions
	string getBalance();
	void printBalance();
	void formatBalance();
	void setNewBalance();

	// Money operator+(const Money &);

private:
	void setBalance();

	int _dollar;
	int _change;
	ostringstream _balance;

};

#endif