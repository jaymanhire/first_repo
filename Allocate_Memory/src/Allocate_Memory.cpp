//============================================================================
// Name        : Allocate_Memory.cpp
// Author      : JLM
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	Animal() {
		cout << "Animal created." << endl;
	}
	Animal(const Animal& other) :
			name(other.name) {
		cout << "Animal created by copying." << endl;
	}
	~Animal() {
		cout << "Destructor called." << endl;
	}
	void setName(string name) {
		this->name = name;
	}
	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

int main() {

	int *pInt = new int;

	*pInt = 8;
	cout<< *pInt <<endl;
	delete pInt;

	Animal *pAnim = new Animal;
	delete pAnim;


	return 0;
}
