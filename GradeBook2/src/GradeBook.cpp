/*
 * GradeBook.cpp
 *
 *  Created on: Jul 26, 2018
 *      Author: jlm
 */

#include <iostream>
#include <string>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string name) {
	setCourseName(name);
	aCount = 0;
	bCount = 0;
	cCount = 0;
	dCount = 0;
	fCount = 0;
} // end

void GradeBook::setCourseName(string name) {
	if (name.length() <= 25)
		courseName = name; // store the course name in the object
	else {
		courseName = name.substr(0, 25); // select first 25 characters
		cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
				<< "Limiting courseName to first 25 characters.\n" << endl;
	}
}

string GradeBook::getCourseName() {
	return courseName;
}

void GradeBook::displayMessage() {

	cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
			<< endl;
}
void GradeBook::inputGrades() {
	int grade; // grade entered by user
	cout << "Enter the letter grades." << endl
			<< "Enter the EOF character to end input." << endl;
// loop until user types end-of-file key sequence
	while ((grade = cin.get()) != EOF) {
// determine which grade was entered
		switch (grade) // switch statement nested in while
		{
		case 'A':
		case 'a':
			++aCount;
			break;
		case 'B':
		case 'b':
			++bCount;
			break;
		case 'C':
		case 'c':
			++cCount;
			break;

		case 'D':
		case 'd':
			++dCount;
			break;

		case 'F':
		case 'f':
			++fCount;
			break;

		case '\n': // ignore newlines,
		case '\t': // tabs,
		case ' ': // and spaces in input
			break; // exit switch
		default: // catch all other characters
			cout << "Incorrect letter grade entered." << " Enter a new grade."
					<< endl;
			break; // optional; will exit switch anyway
		}
	}
}
void GradeBook::displayGradeReport() {
// output summary of results
	cout << "\n\nNumber of students who received each letter grade: " << "\nA: "
			<< aCount
			// display number of
			<< "\nB: " << bCount << "\nC: " << cCount << "\nD: " << dCount
			<< "\nF: " << fCount << endl;
}
