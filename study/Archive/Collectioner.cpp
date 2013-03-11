#include "Collectioner.h"
#include "Exceptions.h"

Collectioner::Collectioner(const string& name) : name(name) {}

Collectioner::~Collectioner() {
	if ( !cars.empty() ) {
		throw StillOwnedException();
	}
}

void Collectioner::addCar(Car* car) {
	if ( car->getOwner() != this ) {
		throw NotOwnedException();
	}
	cars.insert(car);
}

void Collectioner::removeCar(Car* car) {
	if ( car->getOwner() == this ) {
		throw StillOwnedException();
	}
	if ( cars.erase(car) == 0 ) {
		throw CarNotFoundException();
	}
}

const set<Car*>& Collectioner::getCars() const {
	return cars;
}

const string& Collectioner::getName() const {
	return name;
}
