//============================================================================
// Name        : Roll_Die.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {

	short counter;

	srand(time(0));

	for (counter = 1; counter <= 20; ++counter) {
		cout << setw(5) << (1 + rand() % 6); // pick random number from 1 to 6 and output it

		// if counter is divisible by 5, start a new line of output
		if (counter % 5 == 0) {
			cout << endl;
		}

	}

	cout << "\nThe variable 'counter' is " << sizeof(counter) << " bytes\n";

	return 0;
}
