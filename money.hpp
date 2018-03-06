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
using std::cout;
using std::endl;
using std::ostringstream;
using std::ostream;
using std::cin;

class Money{
public:
	// Constructor and destructor.
	Money(int, int);
	~Money();

	// Accessor & Mutator functions.
	void setDollar(float);
	void setChange(float);
	float getDollar();
	float getChange();

	// Validator
	void moneyValidator();

	// Extra Money Functions
	void printBalance();
	void formatBalance();
	void setNewBalance();

	// Money operator+(const Money &);

private:
	void setBalance();

	float _dollar;
	float _change;
	ostringstream _balance;

};

#endif