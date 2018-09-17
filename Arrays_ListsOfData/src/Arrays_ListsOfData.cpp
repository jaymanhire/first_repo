//============================================================================
// Name        : Arrays_ListsOfData.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
#include <cstdio>
using namespace std;

int main() {

	int values[3];

	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	double numbers[] = { 4.5, 33.3, 65.45, 309.99, 12.45 };
	for (int i = 0; i < numbers[i]; i++) {
		cout << "Value at index " << i + 1 << ": " << numbers[i] << endl;
	}

	puts("------------------");
	string texts[] = { "apple", "banana", "pear", "kiwi" };
	for (int i = 0; i < 4; i++) {
		cout << "Strings " << i << ": " << texts[i] << endl;
	}

	return 0;
}
