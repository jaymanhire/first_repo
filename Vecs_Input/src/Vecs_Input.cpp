//============================================================================
// Name        : Vecs.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {

	cout << "Ctrl-d to stop." << endl;
	vector<double> vd;
	for (double d; cin >> d;) {
		vd.push_back(d);
	}

	for (unsigned int i = 0; i < vd.size(); i++) {
		cout << "Element " << i << ": " << fixed << setprecision(3) << vd[i]
				<< endl;
	}

	return 0;
}
