/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#include "money.hpp"

Money::Money():_dollar(0), _change(0){}


Money::Money(int dollar, int change): _dollar(dollar), _change(change) {
	moneyValidator();
	setBalance();
	cout << "Your new wallet" << endl;
	printBalance();
}

Money::Money(Money & money){
	_dollar = money._dollar;
	_change = money._change;
	this->setBalance();
}

Money &Money::operator=(const Money & rhs){

	if (this != &rhs){

		_dollar = rhs._dollar;
		_change = rhs._change;
		setBalance();
	}
	return *this;
}

Money::~Money(){
	cout << "You burned your wallet..." << endl;
}

void Money::moneyValidator(){
	if (_dollar < 0)
		_dollar = 0;
	if (_change < 0 || _change >= 100)
		_change = 0;
}

int Money::getDollar(){
	return _dollar;
}

int Money::getChange(){
	return _change;
}

string Money::getBalance(){
	return _balance.str();
}

void Money::setDollar(int dollar){
	_dollar = dollar;
	setBalance();
}

void Money::setChange(int change){
	_change = change;
	setBalance();
}


void Money::setNewBalance(){

	float input;
	cout << "Enter new dollar amount..." << endl;
	cin >> input;
	setDollar(input);

	cout << "Enter new change amount..." << endl;
	cin >> input;
	setChange(input);
	
	moneyValidator();	
	setBalance();
}

void Money::setBalance(){
	_balance.str("");
	_balance.clear();
	formatBalance(); 
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


// Operator overloading

Money Money::operator+(const Money & rhs){
	Money money;
	money._dollar = this->_dollar + rhs._dollar;
	money._change = this->_change + rhs._change;
	money.setBalance();
	return money;
}





