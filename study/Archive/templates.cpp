#include <iostream>

using namespace std;

template<class Type> Type increment(Type value) {
	return value + 1;
}

int main() {
	int x = 65;
	char c = 'A';
	float f = 7.5;

	cout << x << " " << increment(x) << endl;
	cout << c << " " << increment(c) << endl;
	cout << f << " " << increment(f) << endl;

	return 0;
}