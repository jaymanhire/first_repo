//============================================================================
// Name        : Scope.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal(); // function prototype
void useGlobal();

int x = 1;

int main() {
	cout << "global x in main is " << x << endl;
	int x = 5; // local variable to main

	cout << "local x in main's outer scope is " << x << endl;
	{ // start new scope
		int x = 7; // hides both x in outer scope and global x
		cout << "local x in main's inner scope is " << x << endl;
	} // end new scope
	cout << "local x in main's outer scope is " << x << endl;

	useLocal(); // useLocal has local x
	useStaticLocal(); // useStaticLocal has static local x
	useGlobal(); // useGlobal uses global x
	useLocal(); // useLocal reinitializes its local x
	useStaticLocal(); // static local x retains its prior value
	useGlobal(); // global x also retains its prior value
	cout << "\nlocal x in main is " << x << endl;

	return 0;

} // end main
// useLocal reinitializes local variable x during each call
void useLocal() {
	int x = 25; // initialized each time useLocal is called
	cout << "\nlocal x is " << x << " on entering useLocal" << endl;
	++x;
	cout << "local x is " << x << " on exiting useLocal" << endl;
} // end function useLocal
// useStaticLocal initializes static local variable x only the
// first time the function is called; value of x is saved
// between calls to this function

void useStaticLocal() {

	static int x = 50; // initialized first time useStaticLocal is called

	cout << "\nlocal static x is " << x << " on entering useStaticLocal"
			<< endl;
	++x;
	cout << "local static x is " << x << " on exiting useStaticLocal" << endl;
} // end function useStaticLocal
// useGlobal modifies global variable x during each call
void useGlobal() {
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
	x *= 10;
	cout << "global x is " << x << " on exiting useGlobal" << endl;
} // end function useGlobal

