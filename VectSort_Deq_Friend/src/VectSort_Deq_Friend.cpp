//============================================================================
// Name        : VectSort_Deq_Friend.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Test {
private:
	int id;
	string name;
public:
	Test(int id, string name) :
			id(id), name(name) {
	}
	void print() {
		cout << id << ": " << name << endl;
	}
	bool operator<(const Test &other) const {
		return name < other.name;
	}
	//friend bool comp(const Test &a, const Test &b);
};

//bool comp(const Test &a, const Test &b) {
//	return a.name < b.name;
//}
int main() {

	vector<Test> tests;

	tests.push_back(Test(5, "Mike"));
	tests.push_back(Test(3, "Vicky"));
	tests.push_back(Test(10, "Sue"));
	tests.push_back(Test(7, "Raj"));


	//sort(tests.begin(), tests.end(), comp);
	sort(tests.begin(), tests.end());


	for (unsigned int i = 0; i < tests.size(); ++i) {
		tests[i].print();
	}

	return 0;
}
