//============================================================================
// Name        : Iterate_WithFor.cpp
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

	for (int i = 0; i < 5; i++) {
		printf("Element %d is: %d\n", i, a[i]);
	}

	puts("");

	char s[] = "string";

	for (const char *cp = s; *cp != 0; ++cp) {
		printf("Letter: %c\n", *cp);
	}

	return 0;
}
