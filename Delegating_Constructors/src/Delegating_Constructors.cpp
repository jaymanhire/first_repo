//============================================================================
// Name        : Delegating_Constructors.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Parent {
	int dogs{5};
	string text{"hello"};
public:
	Parent(): Parent("hello") {
		//dogs = 5;
		cout << "No parameter Parent constructor" << endl;
	}

	Parent(string text) {
		dogs = 5;
		this->text = text;
		cout << "string parent constructor" << endl;
	}
};

class Child: public Parent {
public:
	Child() = default;

};

int main() {

	Parent parent("Hello");
	Child child;

	return 0;
}
