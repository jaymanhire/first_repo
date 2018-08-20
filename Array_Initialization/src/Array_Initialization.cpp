//============================================================================
// Name        : Array_Initialization.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {

	int n[] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };

	cout << "Element" << setw(13) << "Value" << endl;

	for (int i = 0; i < 10; i++) {
		cout << setw(7) << i << setw(13) << n[i] << endl;
	}

	return 0;
}
