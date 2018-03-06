/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "money.cpp"

void printLine(){
	cout << "\n==================\n" << endl;
}

TEST_CASE("Money Testing -- Simple Init"){

	{
		Money a(5,5);
		REQUIRE(a.getDollar() == 5);
		REQUIRE(a.getChange() == 5);
		REQUIRE(a.getBalance() == "$5.05");
	}
	printLine();
}

TEST_CASE("Money Testing -- Alter Data"){
	
	{
		Money a(5,5);
		cout << "Enter values 3 and 10 to pass following tests..." << endl;
		a.setNewBalance();

		REQUIRE(a.getDollar() == 3);
		REQUIRE(a.getChange() == 10);
		REQUIRE(a.getBalance() == "$3.10");
	}
	printLine();
}

TEST_CASE("Operator Overloading -- Simple Test"){

	{
		Money a(5,5);
		Money b(5,5);
		Money c;

		c = a + b;
		REQUIRE(c.getDollar() == 10);
		REQUIRE(c.getChange() == 10);
		REQUIRE(c.getBalance() == "$10.10");
	}
	printLine();
}