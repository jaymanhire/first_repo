/*
 * GradeBook.h
 *
 *  Created on: Jul 26, 2018
 *      Author: jlm
 */

#ifndef GRADEBOOK_H_
#define GRADEBOOK_H_
#include <iostream>
using namespace std;


class GradeBook {
public:

	GradeBook (string); // constructor initializes course name
	void setCourseName(string); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	void displayMessage(); // display a welcome message
	void inputGrades(); // input arbitrary number of grades from user
	void displayGradeReport(); // display a report based on the grades
private:
	string courseName; // course name for this GradeBook
	int aCount; // count of A grades
	int bCount; // count of B grades
	int cCount; // count of C grades
	int dCount; // count of D grades
	int fCount; // count of F grades
};

#endif /* GRADEBOOK_H_ */
