//============================================================================
// Name        : While_LyndaLoop.cpp
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
	int i = 0;
	do {
		printf("Index %d:  %d\n", i, a[i]);
		i++;
	} while (i < 5);

	puts("-----------");

	int b[] = { 1, 2, 3, 4, 5 };
	int j = 0;
	while (j < 5) {
		printf("Index %d:  %d\n", j, b[j]);
		j++;
	}

	return 0;
}
