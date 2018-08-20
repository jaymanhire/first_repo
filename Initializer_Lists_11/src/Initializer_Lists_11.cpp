//============================================================================
// Name        : Initializer_Lists_11.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <initializer_list>
using namespace std;

class Test {
public:
	Test(initializer_list<string> texts) {
		for (string values : texts) {
			cout << values << endl;
		}
	}

	void print(initializer_list<string> list) {
		for (string values : list) {
			cout << values << endl;
		}
	}
};

int main() {

	vector<int> numbers { 1, 3, 4, 6 };
	cout << numbers[2] << endl;

	Test test { "apple", "orange", "banana" };

	test.print({"one","two","three"});


	return 0;
}
