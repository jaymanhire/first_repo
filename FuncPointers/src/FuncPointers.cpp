//============================================================================
// Name        : FuncPointers.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void test(int value) {
	cout << "Hello: " << value << endl;
}

int testInt(int x) {
	int sqr = x*x;
	return sqr;
}

int main() {

	test(7);
	void (*pTest)(int) = test;
	pTest(8);

	testInt(5);
	int (*pTestInt)(int) = testInt;
	cout << pTestInt(5);

	return 0;
}
