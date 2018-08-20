/*
 * Grade.cpp
 *
 *  Created on: Jul 23, 2018
 *      Author: jlm
 */

#include "Grade.h"
#include <iostream>
#include <iomanip>
using namespace std;

Grade::Grade(string name) {
	setCoursename(name);
}

void Grade::setCoursename(string name) {
	if (name.length() <= 25) {
		courseName = name;
	} else {
		courseName = name.substr(0, 25);
		cout << "Name " << name << " exceeds max length(25 chars)" << endl;
		cout << "Limiting course name to 25 chars..." << endl;
	}
}

string Grade::getCoursename() {
	return courseName;
}
void Grade::displayMessage() {
	cout << "Welcome to the grade book for " << getCoursename() << endl;
}
void Grade::determineClassAverage() {
	int total;
	int gradeCounter;
	int grade;
	double average;

	total = 0;
	gradeCounter = 0;

	cout << "Enter grade or -1 to quit: ";
	cin >> grade;

	while (grade != -1) {
		total = total + grade;
		gradeCounter = gradeCounter + 1;

		cout << "Enter grade or -1 to quit: ";
		cin >> grade;
	}
	if(gradeCounter !=0) {
		average = static_cast<double>(total) / gradeCounter;
		cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
		cout << "Class average is " << setprecision( 2 ) << fixed << average<<endl;
	} else {
		cout << "No grade were entered." << endl;
	}

}
