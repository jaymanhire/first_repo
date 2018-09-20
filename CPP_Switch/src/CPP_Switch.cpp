//============================================================================
// Name        : CPP_Switch.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


	int number = 0;

	void showMenu() {
		cout << "Enter a number 1, 2, 3, or 5: " << endl;
		cin >> number;
	}

	void selectionApp() {

		switch (number) {
		case 1:
			cout << "You entered 1." << endl;
			break;
		case 2:
			cout << "You entered 2." << endl;
			break;
		case 3:
			cout << "You entered 3." << endl;
			break;
		case 5:
			cout << "You got it!!!!!!!." << endl;
			break;

		default:
			cout << "Invalid entry, dummy." << endl;
		}
	}

	int main() {


		showMenu();
		selectionApp();


		return 0;
	}

