//============================================================================
// Name        : 2D_Array_SizeOf.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	string animals[2][3] = { { "fox", "dog", "cat" },
							 { "mouse", "squirrel",	"parrot" }
	};

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of string: " << sizeof(string) << endl;
	cout << "Size of 2-D array: " << sizeof(animals[0]) << endl;
	cout << endl;

	for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
		for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) {
			cout << left << setw(25) << animals[i][j] << " " << flush;
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << left << setw(25) << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
	return 0;
}
