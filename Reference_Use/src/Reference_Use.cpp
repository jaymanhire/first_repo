//============================================================================
// Name        : Reference_Use.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x = 3;
	int &y = x;

	cout << "x = " << x << endl << "y = " << y << endl;
	y = 7;
	cout << "x = " << x << endl << "y = " << y << endl;

	return 0;
}
