//============================================================================
// Name        : Palindrome_array.cpp
// Author      : JLM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

bool is_palindrome(const char s[], int n) {
	int first = 0;
	int last = n - 1;
	while (first < last) {
		if (s[first] != s[last])
			return false;
		++first;
		--last;

	}
	return true;
}
istream& read_word(istream& is, char* buffer, int max) {		// read at most max – 1 characters from is into buffer
	is.width(max);
	is >> buffer;

	return is;
}

int main() {

	constexpr int max = 128;
	for (char s[max]; read_word(cin, s, max);) {
		cout << s << " is";
		if (!is_palindrome(s, strlen(s)))cout << " not";
		cout << " a palindrome." << endl;
	}

	return 0;
}
