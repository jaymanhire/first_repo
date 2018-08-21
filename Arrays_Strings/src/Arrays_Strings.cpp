//============================================================================
// Name        : Arrays_Strings.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int main() {

	//char s[] = { 's', 't', 'r', 'i', 'n', 'g', 0 }; //null termintaed string-- same as below --

	char s[] = ("string");
	//printf("String is: %s\n", s);

	for (int i = 0; i < 6; i++) {
		printf("%c", s[i]);
	}
	puts("\n");

	for (char *cp = s; *cp != 0; ++cp) {
		printf("char is %c\n", *cp);
	}
	puts("");

	for (char c : s) {
		if (c == 0)
			break;
		printf("char is %c\n", c);
	}

	return 0;
}
