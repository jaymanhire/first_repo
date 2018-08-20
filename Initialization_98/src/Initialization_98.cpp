//============================================================================
// Name        : Initialization.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int values[] = { 1, 4, 5 };

	cout << values[0] << endl;

	class C {
	public:
		string text;
		int id;
	};

	C c1 = { "Hello", 7 };
	cout << c1.text << endl;

	struct S {
	public:
		string text;
		int id;
	};

	C s1 = { "Hello", 7 };
	cout << c1.text << endl;

	struct {
	public:
		string text;
		int id;
	} r1 = { "Hello", 7 }, r2 = { "Hi", 7 };
	cout << r1.text << endl;
	cout << r2.text << endl;
	cout << r2.id << endl;

	vector<string> strings;

	strings.push_back("One");
	strings.push_back("Two");
	strings.push_back("Three");

	return 0;
}
