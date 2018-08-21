//============================================================================
// Name        : Range_ForLoop.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	int a[] = { 1, 2, 3, 4, 5 };

	for (int i : a) {
		printf("Element is %d\n", i);
	}

	puts("");
	char s[] = "string";

	for (char c : s) {
		if (c == 0)	break;

		printf("Element is %c\n", c);
	}

	return 0;
}
