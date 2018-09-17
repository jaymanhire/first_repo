//============================================================================
// Name        : Multi_Dim_Arrays.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {

	string animals[2][3] = {
			{"fox","dog","cat"},
			{"mouse","squirrel","parrot"}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << left << setw(25) << animals[i][j] << " " << flush;
		}
		cout << endl;
	}





	return 0;
}
