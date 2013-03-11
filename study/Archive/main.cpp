#include <iostream>

#include "Car.h"
#include "Collectioner.h"

using namespace std;

int main() {
	Collectioner* vasia = new Collectioner("Vasia");
	Collectioner* masha = new Collectioner("Masha");
	Car* bugatti = new Car(*vasia, "bugatti");
	Car* volvo = new Car(*vasia, "volvo");
	Car* zapor = new Car(*masha, "zaporozhets");
	Car* pobeda = new Car(*masha, "pobjeda");

	bugatti->setOwner(*masha);

	cout << vasia->getName() << endl;
	cout << vasia->getCars() << endl;

	cout << endl;

	cout << masha->getName() << endl;
	cout << masha->getCars() << endl;

	// delete masha;

	delete bugatti;
	delete volvo;
	delete zapor;
	delete pobeda;

	delete vasia;
	delete masha;

	return 0;
}
