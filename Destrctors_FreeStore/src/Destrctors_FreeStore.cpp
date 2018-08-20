//============================================================================
// Name        : Destrctors_FreeStore.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class vector {
private:
	int sz;    				// the size
	double* elem;			// a pointer to the elements
public:
	vector(int s) :
			sz { s }, elem { new double[s] } { /* . . . */} 														// constructor
	~vector() {
		delete[] elem;}
															// destructor
	int size() const {return sz;} 														// the current size
	double get(int n) const {			// access: read
		return elem[n];
	}
	void set(int n, double v) {
		elem[n] = v;
	}
							// access: write
};

int main() {

	/*
	 Both get() and set() access the elements using the [ ] operator on the elem pointer:
	 elem[n] .
	 Now we can make a vector of double s and use it:*/

	vector v(54);
	for (int i = 0; i < v.size(); ++i) {
		v.set(i, 1.1 * i);
		cout << "v[" << i << "]==" << v.get(i) << '\n';
	}

	return 0;
}
