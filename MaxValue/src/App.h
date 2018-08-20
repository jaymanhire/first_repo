/*
 * App.h
 *
 *  Created on: Jul 26, 2018
 *      Author: jlm
 */

#ifndef APP_H_
#define APP_H_
#include <iostream>
using namespace std;

class CalcApp {
private:
	double a;
	double b;
	double c;
public:
	double find_Maximum(double a, double b, double c);
	void runApp();

};

#endif /* APP_H_ */
