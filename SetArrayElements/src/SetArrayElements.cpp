//============================================================================
// Name        : SetArrayElements.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const int arraySize = 10; // constant variable can be used to specify array size

	int s[arraySize];	// array s has 10 elements

	for (int i = 0; i < arraySize; ++i) {	// set the values
		s[i] = 2 + (2 * i); //multiplying each successive value of the loop counter by 2 and adding 2
	}
	cout << "Element" << setw(13) << "Value" << endl;

	for (int j = 0; j < arraySize; ++j) {
		cout << setw(7) << j << setw(13) << s[j] << endl;
	}
	return 0;

}

