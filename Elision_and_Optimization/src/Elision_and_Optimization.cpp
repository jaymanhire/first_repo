//============================================================================
// Name        : Elision_and_Optimization.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Test {
public:
	Test() {
		cout << "constructor" << endl;
	}
	Test(int i) {
		cout << "parameterized constructor " << endl;
	}
	Test(const Test &jay) {
		cout << "parameterized constructor " << endl;
	}
	Test &operator=(const Test &jay) {
		cout << "assignment" << endl;
		return *this;
	}
	~Test() {
		cout << "Destructor" << endl;
	}

	friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
	out << "Hello from test";
	return out;
}

Test getTest() {
	return Test();
}

int main() {					//-fno-elide-constructors  /*flag*/

	Test test1 = getTest();
	cout << test1 << endl;

	return 0;
}
