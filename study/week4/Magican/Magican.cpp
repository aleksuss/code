#include <iostream>

#include "Magican.hpp"

using namespace std;

Magican::Magican() {
    id += 1;
    name = "";
    lastMagican = this;
}
Magican::Magican(Magican& m) {
    id += 1;
    name = "";
    lastMagican = this;
}
int Magican::getId() { return id; }
string Magican::getName() { return name; }
void Magican::setName(string n) { name = n; }
string Magican::getLastName() { return lastMagican->name; }

int Magican::id = 0;
Magican* Magican::lastMagican = NULL;