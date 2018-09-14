//============================================================================
// Name        : Doodle.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <cstdio>
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
class Jay {
private:
public:
	int countDown(int count) {
		if (count == 0)
			return 0;

		cout << count << "..." << endl;
		countDown(count - 1);
		return 0;
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

	puts("------------------------------------------");
	Jay j;
	j.countDown(1000);
	puts("Blast Off");

	return 0;
}
