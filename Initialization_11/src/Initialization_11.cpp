//============================================================================
// Name        : Initialization_11.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value { 5 };

	cout << value << endl; // prints
	string text { "Hello" };
	cout << text << endl;

	int numbers[] { 1, 2, 4 };
	cout << numbers[1] << endl;

	int *pInts = new int[3] { 1, 2, 3 };
	cout << pInts[1] << endl;
	delete pInts;

	return 0;
}
