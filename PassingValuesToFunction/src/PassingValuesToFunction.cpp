//============================================================================
// Name        : PassingValuesToFunction.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

void func(const string *fs) {		//The old way before references, with pointers

	printf("Value is %s\n", fs->c_str());
}

int main() {

	string s = "Hello I'm a string";

	func(&s); // Passing the address
	printf("string is: %s\n", s.c_str());

	cout << "string is: " << s << endl;

	return 0;
}
