//============================================================================
// Name        : Auto.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

template<typename T, typename S>

auto test(T value1, S value2)-> decltype(value1 + value2) {	// optional: -> int  // declare type
	return value1 + value2;
}
int get() {
	return 999;
}
auto test2()->decltype(get()) {	// optional: ->declare type(get())
	return get();
}

int main() {

	auto value = 7;

	auto text = "Hello there";
	cout << value << endl;
	cout << text << endl;

	cout << test(5, 6) << endl;

	cout << test2() << endl;

	return 0;
}
