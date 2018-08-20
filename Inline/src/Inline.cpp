//============================================================================
// Name        : Inline.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

inline double cube(const double side) {
	return side * side * side;
}

int main() {

	double sideValue;
	cout << "Enter the side length of your cube: " << endl;
	cin >> sideValue;
	cout << "Volume of cube with side " << sideValue << " is: " << fixed
			<< setprecision(3) << cube(sideValue) << endl;

	return 0;
}
