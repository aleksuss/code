#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <set>

#include "Collectioner.h"

using namespace std;

class Collectioner;

class Car {
	private:
		Collectioner* owner;
		string name;

	public:
		Car(Collectioner& owner, const string& name);

		~Car();

		const string& getName() const;

		Collectioner* getOwner() const;

		void setOwner(Collectioner& owner);
};

ostream& operator<<(ostream& out, const set<Car*>& v);

#endif
