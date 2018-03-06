/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#include "money.hpp"
#include <iostream>
using std::cout;
using std::endl;


Money::Money(int dollar, int change): _dollar(dollar), _change(change) {
	cout << "Your new wallet" << endl;
	printBalance();
}

Money::~Money(){
	cout << "You dropped your wallet..." << endl;
}

float Money::getDollar(){
	return _dollar;
}

float Money::getChange(){
	return _change;
}

void Money::printBalance(){
	cout << "$" << getDollar() << "." << getChange() << endl;
}

