/*
Jacob McKenna
UAF CS202
Review:
	Classes, overloaded operators, RAII
*/

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "money.cpp"

TEST_CASE("Money Testing -- Simple Init"){

	Money a(5,5);
	REQUIRE(a.getDollar() == 5);
	REQUIRE(a.getChange() == 5);
	REQUIRE(a.getBalance() == "$5.05");

}

TEST_CASE("Money Testing -- Alter Data"){

	Money a(5,5);
	cout << "Enter values 3 and 10 to pass following tests..." << endl;
	a.setNewBalance();

	REQUIRE(a.getDollar() == 3);
	REQUIRE(a.getChange() == 10);
	REQUIRE(a.getBalance() == "$3.10");

}