//============================================================================
// Name        : TemplateFunctions.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

template<typename T>   // or typename instead ofclass
void print(T n) {
	cout << "Template version: " << fixed << setprecision(3) << n << endl;
}

void print(int value) {
	cout << "Non-template version: " << value << endl;
}
template<typename T>   // or typename instead ofclass
void show() {
	cout << T() << endl;
}

int main() {
	print<string>("Hello");
	print<int>(5);
	print('a');
	print(3.5);

	print("Hi there");
	print(6);
	print<int>(6);

	show<double>();

	return 0;
}
