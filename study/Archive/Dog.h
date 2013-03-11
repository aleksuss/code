#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.h"

using namespace std;

class Dog : public Animal {
	public:
		void bark() {
			cout << "Grrrrr!" << endl;
		}

		virtual void walk() {
			cout << "Dog walks with it's master" << endl;
		}
};

#endif
