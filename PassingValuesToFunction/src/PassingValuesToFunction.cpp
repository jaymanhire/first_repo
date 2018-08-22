//============================================================================
// Name        : PassingValuesToFunction.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void func(const int &i) {

	printf("Value is %d\n", i);
}

int main() {

	string s = "Hello I'm a string";
	int x = 42;
	func(x);
	x = 73;

	cout << "x is: " << x << endl;

	return 0;
}
