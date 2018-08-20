//============================================================================
// Name        : Fibonacci.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

unsigned long fibonacci(unsigned long);

int main() {

	for (int counter = 0; counter <= 10; ++counter) {
		cout << "fibonacci(" << counter << ") = " << fibonacci(counter) << endl;
	}
	// display higher fibonacci values
	cout << "fibonacci( 20 ) = " << fibonacci(20) << endl;
	cout << "fibonacci( 30 ) = " << fibonacci(30) << endl;
	cout << "fibonacci( 35 ) = " << fibonacci(35) << endl;

	return 0;
}

unsigned long fibonacci(unsigned long number) {    // recursive?
	if ((number == 0) || (number == 1)) {
		return number;
	} else {
		return fibonacci(number - 1) + fibonacci(number - 2);
	}
}
