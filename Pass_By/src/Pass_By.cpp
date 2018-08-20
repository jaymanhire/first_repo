//============================================================================
// Name        : Pass_By.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main() {

	//const int &x = 2;
	int x = 2;
	int z = 4;

	// Demonstrate square by Value
	cout << "x = " << x << " before squareByValue" << endl;
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;  // Gets a copy of x
	cout << "x = " << x << " after squareByValue" << endl;

	cout << endl;

	// demonstrate squareByReference   Performance Advantage
	cout << "z = " << z << " before squareByReference" << endl;
	squareByReference(z);
	cout << "z = " << z << " After squareByReference" << endl;
	cout << "z: " << z << endl;

	return 0;
}

int squareByValue(int number) {
	return number *= number;
}
void squareByReference(int &numberRef) {
	numberRef *= numberRef;
}
