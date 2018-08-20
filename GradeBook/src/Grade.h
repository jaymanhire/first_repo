/*
 * Grade.h
 *
 *  Created on: Jul 23, 2018
 *      Author: jlm
 */

#ifndef GRADE_H_
#define GRADE_H_
#include <iostream>
using namespace std;

class Grade {
public:
	Grade(string);
	void setCoursename(string);
	string getCoursename();
	void displayMessage();
	void determineClassAverage();

private:
	string courseName;
};

#endif /* GRADE_H_ */
