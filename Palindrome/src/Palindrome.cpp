//============================================================================
// Name        : Vectors.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(const string& s) {
	int first = 0;
	int last = s.length() - 1;
	while (first < last) {
		if (s[first] != s[last])
			return false;
		++first;
		--last;
	}
	return true;
}

int main() {

	for (string s; cin >> s;) {
		cout << s << " is";
		if (!isPalindrome(s))
			cout << " not ";
		cout << " a palindrome." << endl;

	}

	return 0;
}
