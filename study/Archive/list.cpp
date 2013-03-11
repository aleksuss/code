#include <iostream>

#include "MyList.hpp"

#define LOOPS 100000000

using namespace std;

int main() {
	MyList<int> list;

	for ( int i = 0; i < LOOPS; i++ ) {
		list.append(i);
	}

	// cout << list[42] << endl;

	// getchar();

	// for ( ; list.pop() != 0; );

	// getchar();

	return 0;
}
