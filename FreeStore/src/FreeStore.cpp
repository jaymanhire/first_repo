//============================================================================
// Name        : FreeStore.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double *calc(int res_size, int max) {// the caller is responsible for the memory allocated for res
	double *p = new double[max];
	double *res = new double[res_size];
	// use p to calculate results to be put in res

	delete[] p;
	return res;

}

int main() {

	double *r = calc(100, 1000);
	cout << "*r: " << *r << endl;
	delete[] r;
	cout << "*r: " << *r << endl;

	cout << sizeof(r) << endl;
	cout << sizeof(calc(16, 32));

	return 0;
}
