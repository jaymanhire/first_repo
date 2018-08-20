/*
 * App.cpp
 *
 *  Created on: Jul 26, 2018
 *      Author: jlm
 */

#include <iostream>
#include <vector>
#include "App.h"
using namespace std;

double CalcApp::find_Maximum(double a, double b, double c) {

	double maxValue = a;

	if (b > maxValue)
		maxValue = b;
	if (c > maxValue)
		maxValue = c;

	return maxValue;

}

void CalcApp::runApp() {

/*	vector<double> numbers;
	for (double db; cin >> db;) {
		numbers.push_back(db);
	}*/

	cout << "Enter numbers: " << endl;
	cin >> a >> b >> c;
	cout << "The maximum value is: ";
	cout << CalcApp::find_Maximum(a, b, c);
}

