//============================================================================
// Name        : Bool_Types.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {

	float money = 987.00f;

	bool bValue = true;
	cout << bValue << endl;

	char cValue = '7';
	cout << (int) cValue << endl;
	cout << fixed << setprecision(2) << money << endl;

	wchar_t wValue = 'i';
	cout << "ASCII # for 'i': " << wValue << endl;

	wchar_t wValue2 = 'i';
	cout << "ASCII cast for 'i': " << (char)wValue2 << endl;

	cout<<"sizeof wchar_t: "<<sizeof(wchar_t)<<endl;
	cout<<"sizeof char: "<<sizeof(char)<<endl;
	puts("---------------------------------------");




	return 0;
}
