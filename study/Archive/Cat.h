#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.h"

using namespace std;

class Cat : public Animal {
	public:
		void meow() {
			cout << "Meow!" << endl;
		}

		virtual void walk() {
			cout << "Cat walks alone" << endl;
		}
};

#endif
