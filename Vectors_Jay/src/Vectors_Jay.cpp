//============================================================================
// Name        : Vectors_Jay.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {

	vector<string> str_vec = { "first", "second", "third" };

	for (unsigned int i = 0; i < str_vec.size(); ++i) {
		cout << "Index " << i << ": " << str_vec[i] << endl;
	}
	puts("");

	str_vec.push_back("fourth");
	puts("Added index below");

	for (vector<string>::iterator it = str_vec.begin(); it != str_vec.end();
			it++) {

		cout << *it << endl;
	}

	puts("--Reverse Below--");

	for (unsigned int j = str_vec.size(); j-- > 0;) {
		cout << str_vec[j] << endl;
	}

	return 0;
}
