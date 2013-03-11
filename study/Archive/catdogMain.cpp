#include <iostream>

#include "Cat.h"
#include "Dog.h"
#include "Catdog.h"

using namespace std;

int main() {
	// Cat cat;
	// Dog dog;
	Catdog cd;

	// cd.meow();
	// cd.bark();

	cd.walk();
	cd.Cat::walk();
	cd.Dog::walk();


	// cd.Cat::wag();

	return 0;	
}
