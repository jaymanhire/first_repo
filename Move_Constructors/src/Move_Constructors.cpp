//============================================================================
// Name        : Move_Constructors.cpp
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
	int *pBuffer { nullptr };
public:
	Test() {

		pBuffer = new int[SIZE] { };

	}
	Test(int i) {
		cout << "parameterized constructor " << endl;
		pBuffer = new int[SIZE] { };

		for (int i = 0; i < SIZE; i++) {
			pBuffer[i] = 7 * i;
		}
	}

	Test(const Test &other) {

		pBuffer = new int[SIZE] { };

		memcpy(pBuffer, other.pBuffer, SIZE * sizeof(int));
	}

	Test(Test &&other) {
		cout << "Move constructor" << endl;
		pBuffer = other.pBuffer;
		other.pBuffer = nullptr;
	}

	Test &operator=(const Test &other) {

		pBuffer = new int[SIZE] { };

		memcpy(pBuffer, other.pBuffer, SIZE * sizeof(int));
		return *this;
	}
	~Test() {

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

	vector<Test> vec;
	vec.push_back(Test());


	return 0;
}
