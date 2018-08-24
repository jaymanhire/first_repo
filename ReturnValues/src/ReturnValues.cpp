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

 const string & func() {

	static string s = "This is a string";
	return s;
}

int main() {

	puts("this is main()");
	printf("Return: %s\n", func().c_str());




	return 0;
}
