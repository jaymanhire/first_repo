//============================================================================
// Name        : Lambda_Parameters_ReturnType.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void testGreet(void (*greet)(string)) {	// Function which accepts the Lambda expression and invokes it.
	greet("Bob");
}

void runDivide(double (*pDivide)(double a, double b)) {
	auto rVal = pDivide(9, 3);
	cout << rVal << endl;
}

int main() {

	auto pGreet = [](string name) {cout << "Hello "<< name <<endl;};

	pGreet("Mike");

	testGreet(pGreet);
	//or
	testGreet([](string name) {cout << "Hello "<< name <<endl;});

	auto pDivide = [](double a, double b)-> double {
		if(b == 0.0) {
			return 0;
		}
		return a/b;
	};

	cout << pDivide(10.0, 5.0) << endl;
	cout << pDivide(10.0, 0) << endl;

	runDivide(pDivide);

	return 0;
}
