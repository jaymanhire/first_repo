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
	int *ip = &x;
	int &y = x;

	printf("Value of x is %d\n", x);
	printf("Value of x is %d\n", *ip);
	printf("Value of y is %d\n", y);

	x = 42;
	printf("Value of x is %d\n", x);
	printf("Value of x is %d\n", *ip);
	printf("Value of y is %d\n", y);

	int z = 149;
	ip = &z;
	printf("Value of x is %d\n", x);
	printf("Value of x is %d\n", *ip);
	printf("Value of y is %d\n", y);
	printf("Value of y is %d\n", z);

	y = z;
	printf("Value of x is %d\n", x);
	printf("Value of x is %d\n", *ip);
	printf("Value of y is %d\n", y);
	printf("Value of y is %d\n", z);

	return 0;
}
