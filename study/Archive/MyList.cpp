#include <cstdlib>
#include <exception>

#include "MyList.hpp"

using namespace std;

template<class Type>
MyList<Type>::MyList() : len(0), capacity(step), content(NULL) {
	resize(step);
}

template<class Type>
void MyList<Type>::append(Type value) {
	if ( len + 1 == capacity ) {
		size_t newCapacity = capacity * multiplier;

		resize(newCapacity);
		capacity = newCapacity;	
	}

	content[len] = value;
	len += 1;
}

template<class Type>
Type MyList<Type>::pop() {
	size_t newLen = len - 1;
	size_t newCapacity = capacity - step;
	Type value = content[newLen];

	if ( newLen < newCapacity ) {
		resize(newCapacity);
		capacity = newCapacity;
	}
		
	len = newLen;
	return value;
}

template<class Type>
void MyList<Type>::resize(size_t size) {
	Type* temp = (Type*) realloc(content, size*sizeof(Type));

	if ( temp == NULL ) {
		throw exception();
	}

	content = temp;
}

template<class Type>
Type MyList<Type>::operator[](size_t index) {
	if ( index >= len ) {
		throw exception();
	}
	return content[index];	
}
