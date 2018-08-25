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

	Parent *pp = &brother;
	//Brother *pb = &parent;
	Brother *pb = static_cast<Brother *>(&parent);
	cout << pb;
	delete pb;

	return 0;
}
