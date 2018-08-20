//============================================================================
// Name        : Histogram.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int arraySize = 11;
	int n[arraySize] = { 0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1 };

	cout << "Grade Distribution:" << endl;

	for (int i = 0; i < arraySize; i++) {
		{
			// output bar labels ("0-9:", ..., "90-99:", "100:" )
			if (i == 0)
				cout << " 0-9: ";
			else if (i == 10)
				cout << "  100: ";
			else
				cout << i * 10 << "-" << (i * 10) + 9 << ": ";
			// print bar of asterisks
			for (int stars = 0; stars < n[i]; ++stars)
				cout << '*';
			cout << endl; // start a new line of output
		} // end outer for
	}

	return 0;
}
