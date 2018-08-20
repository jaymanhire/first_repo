//============================================================================
// Name        : Generic_Temps.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T>

int size_in_bits(const T& a) {
	return sizeof(a) * 8;
}

int main() {

	cout << size_in_bits(21) << endl;
	cout << size_in_bits('x') << endl;
	cout << size_in_bits(654.132f) << endl;
	cout << size_in_bits(65499.132646) << endl;

	return 0;
}
