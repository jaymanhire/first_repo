//============================================================================
// Name        : Static_Cast.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent {

};

class Brother {

};

class Sister {

};

int main() {

	Parent parent;
	Brother brother;

	float value = 3.23;
	cout << static_cast<int>(value) << endl;

	return 0;
}
