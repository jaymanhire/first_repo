//============================================================================
// Name        : GradeBook2.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GradeBook.h"

using namespace std;

int main() {

	GradeBook myGradeBook( "CS101 C++ Programming" );
	myGradeBook.displayMessage(); // display welcome message
	myGradeBook.inputGrades(); // read grades from user
	myGradeBook.displayGradeReport();


	return 0;
}
