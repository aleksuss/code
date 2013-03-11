#include "Range.h"

Range::Range(int min, int max, int step) : first(min), step(step), current(min) {
	int multiple = max - max % step;

	if ( multiple > max ) {
		multiple -= step;
	}
	last = multiple;
}

Range::Range(int max, int step) : first(0), step(step), current(0) {
	int multiple = max - max % step;

	if ( multiple > max ) {
		multiple -= step;
	}
	last = multiple;
}

void Range::next() {
	int next = current + step;

	if ( next <= last ) {
		current = next;
	}
}

void Range::previous() {
	int previous = current - step;
	
	if ( previous >= first ) {
		current = previous; 
	}
}

void Range::rewind() {
	current = first;
}

int Range::value() {
	return current;
}

int Range::begin() {
	return first;
}

int Range::end() {
	return last;
}

void Range::operator++(int) {
	next();
}

bool Range::operator<(int value) {
	return current < value;
}

int Range::operator*() {
	return current;
}

