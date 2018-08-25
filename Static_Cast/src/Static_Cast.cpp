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

class Brother: public Parent {

};

class Sister: public Parent {

};

int main() {

	Parent parent;
	Brother brother;

	Parent *ppb = &brother;

	Brother *pbb = static_cast<Brother *>(ppb);

	cout << pbb << endl;

	return 0;
}
