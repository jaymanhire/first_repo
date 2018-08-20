//============================================================================
// Name        : Functors.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Test {
	virtual bool operator()(string &text) = 0;
	virtual ~Test() {}

};

struct MatchTest: public Test {						//struct MatchTest is a Functor
	virtual bool operator()(string &text) {
		return text == "lion";
	}
	virtual ~MatchTest() {}
};

void check(string text, Test &test) {
	if (test(text)) {
		cout << "Text matches!" << endl;
	} else {
		cout << "No Match." << endl;
	}
}

int main() {

	MatchTest pred;

	string value = "lion";

	//cout << pred(value) << endl;

	MatchTest m;
	check("lion", m);


	return 0;
}
