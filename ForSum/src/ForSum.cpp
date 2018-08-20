//============================================================================
// Name        : ForSum.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int total = 0;

	for (int number = 2; number <= 20; number += 2) {
		total += number;
		cout << "Sum is: " << total << endl;
	}

	return 0;
}
