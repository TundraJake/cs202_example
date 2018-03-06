/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#ifndef MONEY_H
#define MONEY_H 

class Money{
public:
	Money(int, int);
	~Money();
	void printBalance();
	float getDollar();
	float getChange();

	// Money operator+(const Money &);

private:
	float _dollar;
	float _change;

};

#endif