//============================================================================
// Name        : Break_Continue.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		cout << "i is: " << i << endl;
		if (i == 3) {
			break;
			cout << "This will not run." << endl;
		}
	}
	puts("----------------------");

	for (int i = 0; i < 6; i++) {
		cout << "i is: " << i << endl;
		if (i == 2) {
			continue;
		}
		puts("Looping");
	}

	puts("Quitting.");

	puts("----------------------------");

	for (int i = 0; i < 6; i++) {
		cout << "i is: " << i << endl;
		if (i > 2) {
			continue;
		}
		puts("Looping");
	}

	puts("Quitting.");
	puts("------------------");

	const string password = "Hello";
	string input;

	do {
		cout << "Enter password > " << flush;
		cin >> input;

		if (input == password) {
			break;
		} else {
			cout << "Access denied." << endl;
		}
	} while (true);

	cout << "Password accepted." << endl;
	cout << "Program quitting." << endl;

	return 0;
}
