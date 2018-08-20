//============================================================================
// Name        : Template_Max.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include "maximum.h"
using namespace std;

int main() {

	int int1;
	int int2;
	int int3;

	cout << "Enter 3 integers: " << endl;
	cin >> int1 >> int2 >> int3;

	cout << "The maximum integer is: " << maximum(int1, int2, int3) << endl;

	char char1;
	char char2;
	char char3;

	cout << "Enter 3 chars: " << endl;
	cin >> char1 >> char2 >> char3;

	cout << "The maximum char is: " << maximum(char1, char2, char3) << endl;

	double double1;
	double double2;
	double double3;

	cout << "Enter 3 doubles: " << endl;
	cin >> double1 >> double2 >> double3;

	cout << "The maximum integer is: " << fixed << setprecision(3) << maximum(double1, double2, double3) << endl;

	return 0;
}
