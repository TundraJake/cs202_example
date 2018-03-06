/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#include "money.hpp"

Money::Money(int dollar, int change): _dollar(dollar), _change(change) {
	changeValidator();
	cout << "Your new wallet" << endl;
	printBalance();
}

void Money::changeValidator(){
	if (_change < 0)
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

void Money::formatBalance(ostream & os){
	os << "$" << getDollar();
	if (getChange() < 10)
		os << ".0" << getChange();
	else
		os << "." << getChange();
}

void Money::printBalance(){ 
	std::ostringstream os;
	formatBalance(os);
	cout << os.str() << endl;
}

