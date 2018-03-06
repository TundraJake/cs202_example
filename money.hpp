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

class Money{
public:
	// Constructor and destructor.
	Money(int, int);
	~Money();

	// Accessor & Mutator functions.
	void setDollar();
	void setChange();
	float getDollar();
	float getChange();

	void printBalance();
	void moneyValidator();
	void formatBalance();


	// Money operator+(const Money &);

private:
	void setBalance();
	float _dollar;
	float _change;
	ostringstream _balance;

};

#endif