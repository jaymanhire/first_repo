//============================================================================
// Name        : SumArray_Members.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int arraySize = 5;
	int a[arraySize] = { 10, 20, 50, 100, 100 };

	int total = 0;

	for (int i = 0; i < arraySize; i++) {
		total += a[i];

	}
	cout << "Sum of array elments: " << total << endl;

	return 0;
}
