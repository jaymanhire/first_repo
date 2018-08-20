//============================================================================
// Name        : Intro_Lambda_Expressions.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void test(void(*pFunc)()) { // Function which accepts the Lambda expression and invokes it.
	pFunc();
}

int main() {

	auto func = [](){cout<<"Hello"<<endl;};

	func();

	test(func);
	//Or Below:
	test([](){cout<<"Hello again"<<endl;});

	return 0;
}
