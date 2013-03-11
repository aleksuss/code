#ifndef CATDOG_H
#define CATDOG_H

#include <iostream>

#include "Cat.h"
#include "Dog.h"

using namespace std;

class Catdog : public Cat, public Dog {
	public:
		void walk() {
			cout << "Catdogs prefer TV and sofa ;)" << endl;
		}
};

#endif
