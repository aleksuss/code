#include "Car.h"

Car::Car(Collectioner& owner, const string& name) : owner(&owner), name(name) {
#ifdef DEBUG	
	cout << "Constructing car " << name << endl;
#endif
	this->owner->addCar(this);
}

Car::~Car() {
	Collectioner* oldOwner = this->owner;

#ifdef DEBUG	
	cout << "Destructing car " << name << endl;
#endif
	this->owner = NULL;
	oldOwner->removeCar(this);
}

const string& Car::getName() const {
	return name;
}

Collectioner* Car::getOwner() const {
	return owner;
}

void Car::setOwner(Collectioner& newOwner) {
	Collectioner* oldOwner = this->owner;
	
	this->owner = &newOwner;
	oldOwner->removeCar(this);
	this->owner->addCar(this);
}

ostream& operator<<(ostream& out, const set<Car*>& v) {
	set<Car*>::const_iterator i;

	for ( i = v.begin(); i != v.end(); i++ ) {
		out << (*i)->getName() << endl;
	}
	return out;
}

