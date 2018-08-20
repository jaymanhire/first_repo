//============================================================================
// Name        : Object_Initialization.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
private:
	int id = {3} ;
	string name { "Mike"};

public:
	Test() = default;  // because you lose the implicit(default no-arg) Constructor
	Test(const Test &other) = default;
	Test &operator=(const Test &other) = default;

	Test(int id): id(id) {

}
	void print() {
		cout << id << ": " << name << endl;
	}

};
int main() {

	Test test;
	test.print();

	Test test1(77);
	test1.print();

	Test test2 = test1; // Copy initialization, Invokes copy Constructor
	test2 = test;	// Invokes assignment operator

	return 0;
}
