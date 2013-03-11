#include <iostream>

#include "Countable.hpp"

Countable::Countable() {
    count += 1;
}

int Countable::getCount() {
    return count;
}

int Countable::count = 0;
