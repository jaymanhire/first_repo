//============================================================================
// Name        : Elision_and_Optimization.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
	static const int SIZE = 100;
	int *pBuffer;
public:
	Test() {
		cout << "constructor" << endl;
		pBuffer = new int[SIZE] { };
		//memset(pBuffer, 0, sizeof(int)*SIZE);

	}
	Test(int i) {
		cout << "parameterized constructor " << endl;
		pBuffer = new int[SIZE] { };

		for (int i = 0; i < SIZE; i++) {
			pBuffer[i] = 7 * i;
		}
	}
	Test(const Test &jay) {
		cout << "copy constructor " << endl;

		pBuffer = new int[SIZE] { };
		memcpy(pBuffer, jay.pBuffer, SIZE * sizeof(int));

	}
	Test &operator=(const Test &jay) {
		cout << "assignment" << endl;
		pBuffer = new int[SIZE] { };

		memcpy(pBuffer, jay.pBuffer, SIZE * sizeof(int));
		return *this;
	}
	~Test() {
		cout << "Destructor" << endl;
		delete[] pBuffer;
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

	vector<Test> vec;
	vec.push_back(Test());

	return 0;
}
