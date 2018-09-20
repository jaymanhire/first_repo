//============================================================================
// Name        : Remembomatic.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <limits.h>
using namespace std;

int main() {

	int i;
	int n;
	int *p;

	cout << "How many numbers would you like to type? ";
	cin >> i;
	p = new (nothrow) int[i];
	if (p == nullptr)
		cout << "Error: memory could not be allocated";
	else {
		for (n = 0; n < i; n++) {
			cout << "Enter number: ";
			cin >> p[n];
		}
		cout << "You have entered: ";
		for (n = 0; n < i; n++)
			cout << p[n] << ", ";
		delete[] p;
	}
	return 0;
}
