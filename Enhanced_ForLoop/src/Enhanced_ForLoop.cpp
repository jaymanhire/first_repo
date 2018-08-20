//============================================================================
// Name        : Enhanced_ForLoop.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	auto texts = { "one", "two", "three" };

	for (auto txt : texts) {
		cout << txt << endl;
	}

	for (const char* txt : texts) {
		cout << txt << endl;
	}

	vector<int> numbers;
	numbers.push_back(5);
	numbers.push_back(7);
	numbers.push_back(9);
	numbers.push_back(11);

	for (auto vecs : numbers) {
		cout << vecs << endl;
	}
	for (unsigned int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << endl;
	}

	string hello = "Hello";
	for (auto const& c : hello) {
		cout << c << endl;
	}

	return 0;
}
