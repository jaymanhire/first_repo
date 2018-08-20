//============================================================================
// Name        : Func_Overloading.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;



int sqaure(int x) {
	cout << "square of integer " << x << " is: " << endl;
	return pow(x,2);
}
double sqaure(double y) {
	cout << "square of double " << y << " is: " << endl;
	return y * y;
}

int main() {

	cout << sqaure( 7 ) ; // calls int version
	cout << endl;
	cout << sqaure( 7.5 ) ; // calls double version
	cout << endl;
	return 0;
}
