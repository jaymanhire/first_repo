//============================================================================
// Name        : Decltype_Typeid.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

	string value;

	decltype(value) name = "Bob";

	cout << typeid(value).name() << endl;

	cout << name;

	return 0;
}
