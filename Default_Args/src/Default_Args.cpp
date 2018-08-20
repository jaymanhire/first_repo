//============================================================================
// Name        : Default_Args.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
using namespace std;

int number = 7;

int boxVolume(int length = 1, int width = 1, int height = 1);

int main() {

	cout << "Default boxVolume: " << boxVolume() << endl;

	cout << "The volume of a box with length 10, "
			<< "width 1 and height 1 is: " << boxVolume(10) << endl;

	cout << "The volume of a box with length 10, width 20, and height 30 is: "
			<< boxVolume(10, 12, 15) << endl;

	puts("\nOn another note...");
	cout << "Global number: " << ::number << endl;

	return 0;
}

int boxVolume(int length, int width, int height) {
	return length * width * height;
}
