//============================================================================
// Name        : Operator_Overloads.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

class A {
	int a;
public:
	A(const int &a) :
			a(a) {
	}
	const int & value() const {
		return a;
	}
};

int operator + (const A & lhs, const A & rhs) {
	puts("operator + for class A");
	return lhs.value() + rhs.value();
}

int main() {

	A a(7);
	A b(42);
	printf("add em up! %d\n", a + b);

	return 0;
}
