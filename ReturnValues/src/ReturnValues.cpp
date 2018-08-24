//============================================================================
// Name        : ReturnValues.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int func(int i) {
	puts("this is func()");
	return i * 2;
}

int main() {

	puts("this is main()");
	printf("Return: %d\n", func(42));


	return 0;
}
