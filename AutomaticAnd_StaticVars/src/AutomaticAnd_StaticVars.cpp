//============================================================================
// Name        : AutomaticAnd_StaticVars.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

void func() {
	static int i = 5;
	printf("i is %d\n",++i);
	i = 42;
	printf("i is %d\n", ++i);
}


int main() {

	func();
	func();

	return 0;
}
