//============================================================================
// Name        : Cave_If_Password.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

string password = "Hello";

void runFunc() {

	cout << "Enter password: " << flush;
	cin >> password;

	while (password != "Hello") {
		cout << "Access Denied...\n" << endl;
		runFunc();
	}
}
void grantAccess() {
	cout << "Access Granted." << endl;
}

int main() {

	runFunc();
	grantAccess();

	return 0;
}
