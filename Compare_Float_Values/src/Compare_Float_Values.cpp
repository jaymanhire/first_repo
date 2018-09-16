//============================================================================
// Name        : Compare_Float_Values.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float value1 = 1.1025f;

	if (value1 > 1.1030) {
		cout << "Equal" << endl;
	} else {
		cout << "Not equal." << endl;
	}

	cout << fixed << setprecision(5) << value1 << endl;

	return 0;
}
