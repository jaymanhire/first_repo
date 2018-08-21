//============================================================================
// Name        : Pointer.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int x = 7;
	int y = 42;
	int *ip = &x;

	printf("Value of x is %d\n", x);
	printf("Value of y is %d\n", y);
	printf("Value of x is %d\n", *ip);

	x = 73;
	printf("Value of x is %d\n", x);
	printf("Value of y is %d\n", y);
	printf("Value of x is %d\n", *ip);

	ip = &y;
	printf("Value of x is %d\n", x);
	printf("Value of y is %d\n", y);
	printf("Value of x is %d\n", *ip);
	cout << "Address of 42: " << ip << endl;
	puts("Hello, World!");

	return 0;
}
