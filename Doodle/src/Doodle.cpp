//============================================================================
// Name        : Doodle.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

class Test {
private:
	int age = 0;
	string name;
public:
	Test() {
		cout << "Running Constructor" << endl;
	}
	~Test() {
		cout << "Destructor called" << endl;
	}

};
int main() {

	Test test1;

	double *pDub = new double;
	*pDub = 41987.543;
	cout << "Double value: " << fixed << setprecision(3) << *pDub << endl;
	delete pDub;

	Test *pTest = new Test;
	delete pTest;

	return 0;
}
