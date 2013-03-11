#include <iostream>

#include "Range.h"

using namespace std;

int main() {
	Range range(100, 15);

	for ( ; range < range.end(); range++ ) {
		cout << *range << endl;
	}

	return 0;
}
