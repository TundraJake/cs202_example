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
	Money(int, int);
	~Money();
	void printBalance();
	float getDollar();
	float getChange();

	void moneyValidator();
	void formatBalance(ostream &);

	// Money operator+(const Money &);

private:
	float _dollar;
	float _change;
	ostreamstring _balance;

};

#endif