//============================================================================
// Name        : Branching_Conditional.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	const int iONE = 1;
	const int iTWO = 2;
	const int iTWENTY = 20;
	const int iTHREE = 3;
	const int iFOUR = 4;

	int x = 2;

	switch (x) {
	case iONE:
		puts("one");
		break;
	case iTWO:
	case iTWENTY:
		puts("two or twenty");
		break;
	case iTHREE:
		puts("three");
		break;
	case iFOUR:
		puts("four");
		break;
	default:
		puts("Not Valid");
		break;
	}

	return 0;
}
