/*
 * InterestFunc.cpp
 *
 *  Created on: Jul 24, 2018
 *      Author: jlm
 */

#include "InterestFunc.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void InterestFunc::calculateInterest() {


	cout << "Year" << setw(21) << "Amount of deposit" << endl;
	cout << fixed << setprecision(2);

	for (int year = 1; year <= 10; ++year) {
		amount = principal * pow(1.0 + rate, year);
		cout << setw(4) << year << setw(21) << amount << endl;
	}

}


