#include <vector>
#include <iostream>

using namespace std;

template<class Type>
ostream& operator<<(ostream& out, const vector<Type>& v) {
	vector<Type>::const_iterator i;

	for ( i = v.begin(); i < v.end(); i++ ) {
		out << *i << endl;
	}
	return out;
}
