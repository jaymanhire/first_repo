//============================================================================
// Name        : Break.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

	int count;

	for (count = 1; count <= 10; ++count) {
		if (count == 5)
			continue; //break;
		cout << count << " ";
	}
	cout << "Broke out of the loop at count: " << count << endl;
	cout << "-------------------------------------" << endl;

	float c = 13.0;
	float d = 3.6;
	float f = 4.0;
	//short sh = 4565;
	float sum = d * f + c;
	cout << "The square root of 'sum' is: " << fixed << setprecision(2)
			<< sqrt(sum) << endl;

	cout << "Bytes in a float: " << sizeof(float) << endl;
	cout << "Bytes in a double: " << sizeof(double) << endl;
	cout << "Bytes in a short: " << sizeof(short) << endl;
	cout << "Bytes in a int: " << sizeof(int) << endl;

	return 0;
}
