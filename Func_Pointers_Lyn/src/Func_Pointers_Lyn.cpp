//============================================================================
// Name        : Func_Pointers_Lyn.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

 void func() {

	puts("This is func()");
}

int main() {

	void (*fp)() = &func;
	//void (*fp)() = &func;

	puts("this is main()");
	//*fp();
	(*fp)();




	return 0;
}
