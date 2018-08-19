/*
 * InterestFunc.h
 *
 *  Created on: Jul 24, 2018
 *      Author: jlm
 */

#ifndef INTERESTFUNC_H_
#define INTERESTFUNC_H_

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class InterestFunc {
public:
	/*InterestFunc();
	virtual ~InterestFunc();*/
	void calculateInterest();

private:
	//double deposit = 0;
	double amount;
	double principal = 1000.0;
	double rate = .05;
};

#endif /* INTERESTFUNC_H_ */
