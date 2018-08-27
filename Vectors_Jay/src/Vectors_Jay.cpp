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

	vector<string> str_vec = { "Mine", "all", "mein" };

	for (unsigned int i = 0; i < str_vec.size(); ++i) {
		cout << "Index " << i << ": " << str_vec[i] << endl;
	}
	puts("");

	str_vec.push_back("now");

	for (vector<string>::iterator it = str_vec.begin(); it != str_vec.end();
			it++) {

		cout << *it << endl;
	}

	for (vector<string>::iterator bwd = str_vec.end(); bwd != str_vec.begin();
			bwd--) {
		cout << *bwd << endl;
	}

	cout << "Index Position 1: " << str_vec[1] << endl;

	return 0;
}
