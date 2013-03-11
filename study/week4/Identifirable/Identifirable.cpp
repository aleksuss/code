#include <iostream>

#include "Identifirable.hpp"

using namespace std;

Identifirable::Identifirable() {
            id += 1;
            ident = id;
        }
Identifirable::Identifirable(const Identifirable& i) {
            id += 1;
            ident = id;
        }
int Identifirable::getId() { return id; }
int Identifirable::getIdent() const { return ident; }

int Identifirable::id = 0;