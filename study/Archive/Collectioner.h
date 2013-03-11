#ifndef COLLECTIONER_H
#define COLLECTIONER_H

#include <iostream>
#include <set>

#include "Car.h"

using namespace std;

class Car;

class Collectioner {
	private:
		string name;
		set<Car*> cars;

	public:
		Collectioner(const string& name);

		~Collectioner();

		void addCar(Car* car);

		void removeCar(Car* car);

		const set<Car*>& getCars() const;

		const string& getName() const;
};

#endif
