#include <iostream>
#include <vector>

#define LOOPS 100000000

using namespace std;

int main() {
	vector<int> list;

	for ( int i = 0; i < LOOPS; i++ ) {
		list.push_back(i);
	}

	// cout << list[42] << endl;

	// getchar();

	return 0;
}
