/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#include "money.hpp"

Money::Money(int dollar, int change): _dollar(dollar), _change(change) {
	moneyValidator();
	setBalance();
	cout << "Your new wallet" << endl;
	printBalance();
}

void Money::moneyValidator(){
	if (_dollar < 0)
		_dollar = 0;
	if (_change < 0 || _change >= 100)
		_change = 0;
}

Money::~Money(){
	cout << "You burned your wallet..." << endl;
}

float Money::getDollar(){
	return _dollar;
}

float Money::getChange(){
	return _change;
}

void Money::setDollar(float dollar){
	_dollar = dollar;
}

void Money::setChange(float change){
	_change = change;
}

void Money::setBalance(){
	_balance.clear();
	formatBalance(); 
}

void Money::setNewBalance(){

	float input;
	cout << "Enter new dollar amount..." << endl;
	cin >> input;
	setDollar(input);

	cout << "Enter new change amount..." << endl;
	cin >> input;
	setDollar(input);
	
	moneyValidator();	
}

void Money::formatBalance(){
	_balance << "$" << getDollar();
	if (getChange() < 10)
		_balance << ".0" << getChange();
	else
		_balance << "." << getChange();
}

void Money::printBalance(){ 
	cout << _balance.str() << endl;
}

