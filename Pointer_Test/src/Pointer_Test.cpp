//============================================================================
// Name        : Pointer_Test.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void sizes(char ch, int i, int* p) {
	cout << "the size of char is " << sizeof(char) << ' ' << sizeof(ch) << '\n';
	cout << "the size of int is " << sizeof(int) << ' ' << sizeof(i) << '\n';
	cout << "the size of int* is " << sizeof(int*) << ' ' << sizeof(p) << '\n';
}

int main() {

	int x = 17;
	int *pi = &x;
	if (pi != nullptr) {
		cout << "Valid pointer!" << endl;
	}

	double e = 2.71828;
	double *pd = &e;

	cout << "pi= " << pi << " Contents of pi: " << *pi << endl;
	cout << "pd = " << pd << " Contents of pd: " << *pd << endl;

	sizes('a', 65, &x);

	cout << "***************************************" << endl;

	vector<int> v(1000);
	cout << "Size of vector v: " << sizeof(v) << endl;

	return 0;
}
