//============================================================================
// Name        : GradeBook.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Grade.h"
using namespace std;

int main() {

	Grade grade1("Advanced C++");;


	grade1.displayMessage();
	grade1.determineClassAverage();

	return 0;
}
