//============================================================================
// Name        : Conditionals_Lynda.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int x = 711;
	int y = 71;

	printf("The greater is: %d\n", x > y ? x : y);

	if (x < y) {
		puts("True");
	} else if (x > y) {
		puts("Nope");
	} else {
		puts("They must be equal.");
	}

	return 0;
}
