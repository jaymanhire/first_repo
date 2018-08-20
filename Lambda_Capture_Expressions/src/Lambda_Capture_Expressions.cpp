//============================================================================
// Name        : Lambda_Capture_Expressions.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int one = 1;
	int two = 2;
	int three = 3;

	//Capture one and two by value
	[one,two]() {cout << one <<", "<< two <<endl;}();

	//[](){}(); [](){cout<<"Hello"<<endl;}(); // Valid lambda

	//Capture all local var's by value
	[=]() {cout<<one<<", "<<two<<endl;}();

	//default capture all local var's by value, but capture two and three by reference
	[&, two, three]() {one = 800; cout << one <<", "<< two <<", "<< three << endl;}();

	return 0;
}
