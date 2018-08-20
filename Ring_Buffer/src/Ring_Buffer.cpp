//============================================================================
// Name        : Ring_Buffer.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ring.h"
using namespace std;

int main() {

	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");


	for(ring<string>::iterator it = textring.begin(); it != textring.end(); it++) {
		cout << *it << endl;
	}
	cout<<endl;

	for (string value: textring) {
		cout << value << endl;
	}

	return 0;
}
