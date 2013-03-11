#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <stdlib.h>

template <class Type>
class ArrayList {
private:
    Type *array;
    Type *current;
    Type *endArray;
    size_t length;
    bool isEmpty;

public:
    typedef Type* iterator;
    typedef const Type* const_iterator;
    typedef Type* reverse_iterator;
    typedef const Type* const_reverse_iterator;
    typedef Type& reference;
    typedef const Type& const_reference;

    ArrayList();
    ArrayList(size_t);
    ArrayList(size_t size, Type fillValues);
    ArrayList(ArrayList<Type>& list);
    ArrayList(iterator first, iterator last);
    virtual ~ArrayList();

    bool empty();

    size_t size();

    void assign(iterator first, iterator last);

    void assign(size_t number, const Type values);

    reference at(size_t index) { return array[index]; }

    const_reference at(size_t index) const { return array[index]; }

    reference back(size_t index) { return *this->end(); }

    const_reference back(size_t index) const { return *this->end(); }

    size_t max_size() const { return -1/sizeof(Type); }

    void push_back(const Type& value);

    void pop_back();

    ArrayList<Type>& operator=(ArrayList<Type>&);

    Type& operator[](size_t index) const;

    void operator++(Type);

    const_reference operator*() { return *current; }

    iterator begin() { return array; }

    const_iterator begin() const { return array; }

    iterator end() { return array+length; }

    const_iterator end() const { return array+length; }

    reference back() { return array[length-1]; }

    const_reference back() const { return array[length-1]; }

    size_t capacity() const { return size_t(end() - begin()); }

    void resize(size_t);

    void resize(size_t, Type);

    void clear();

    void reserve(size_t);

    void swap(ArrayList<Type>&);

    reverse_iterator rbegin() { return end(); }

    const_reverse_iterator rbegin() const { return end(); }

    reverse_iterator rend() { return begin(); }

    const_reverse_iterator rend() const { return begin(); }

    iterator erase(iterator it) {
        if ( it >= begin() && it <= end() ) {
            length--;
            for ( size_t i = it - begin(); i < length; i++ ) {
                array[i] = array[i+1];
            }
            array = (Type *)realloc(array, sizeof(Type) * length);
            current = array;
            endArray--;
        }
        return it;
    }

    iterator erase(iterator firstIt, iterator lastIt) {
        size_t startIndex = firstIt - begin();
        size_t endIndex = lastIt - begin();

        for ( int i = startIndex, j = endIndex; j < length; i++, j++ ) {
            array[i] = array[j];
        }
        length -= endIndex - startIndex;
        array = (Type *)realloc(array, sizeof(Type) * length);
        current = array;
        endArray = array + length; 
     }

    reference front() { return *begin(); }

    const_reference front() const { return *begin(); }

    iterator insert(iterator it, Type value) {
        if ( it <= end() && it >= begin() ) {
            size_t insertIndex = it - begin();
            size_t tempSize = length - insertIndex;
            Type tempArray[tempSize];
            for ( int i = insertIndex; i < tempSize; i++ ) {
                tempArray[i] = array[i];
            }
            length += 1;
            endArray += 1;
            array = (Type *)realloc(array, sizeof(Type) * length);
            array[insertIndex] = value;
            for ( int i = insertIndex + 1, j = 0; i < length; i++, j++ ) {
                array[i] = tempArray[j];
            }
        }
        return it;
    }

    void insert(iterator it, size_t size, Type value) {
        if ( it <= end() && it >= begin() ) {
            size_t insertIndex = it - begin();
            size_t finishInsert = insertIndex + size;
            size_t tempSize = length - insertIndex;
            Type tempArray[tempSize];
            for ( int i = insertIndex; i < tempSize; i++ ) {
                tempArray[i] = array[i];
            }
            length += size;
            endArray += size;
            array = (Type *)realloc(array, sizeof(Type) * length);
            for ( int i = insertIndex; i < finishInsert; i++ ) {
                array[i] = value;
            }
            for ( int i = insertIndex + size, j = 0; i < length; i++, j++ ) {
                array[i] = tempArray[j];
            }
        }
    }

    void insert(iterator it, iterator firstIt, iterator lastIt) {
        if ( it <= end() && it >= begin() ) {
            int insertSize = lastIt - firstIt;
            int insertIndex = it - begin();
            int tempArraySize = insertSize + (end() - it);
            Type tempArray[tempArraySize];
            int i = 0;

            for ( ; firstIt != lastIt; firstIt++, i++ ) {
                tempArray[i] = *firstIt;
            }
            for ( int j = insertIndex; j < length; i++, j++ ) {
                tempArray[i] = array[j];
            }
            length += insertSize;
            array = (Type *)realloc(array, sizeof(Type) * length);
            current = array;
            endArray += insertSize;
            for ( int j = insertIndex, k = 0; k < tempArraySize; j++, k++ ) {
                array[j] = tempArray[k];
            }
        }
    }
};

template <class Type>
ArrayList<Type>::ArrayList() : length(0), array(NULL) { }

template <class Type>
ArrayList<Type>::ArrayList(size_t size) : length(size) {
    array = (Type *)malloc(sizeof(Type) * size);
    current = array;
    endArray = array + size;
}

template <class Type>
ArrayList<Type>::ArrayList(size_t size, Type fillValues) : length(size) {
    array = (Type *)malloc(sizeof(Type) * size);
    for ( size_t i = 0; i < size; i++ ) {
        array[i] = fillValues;
    }
    current = array;
    endArray = array + size;
}

template <class Type>
ArrayList<Type>::ArrayList(ArrayList<Type>& list) {
    iterator it = list.begin();

    length = list.size();
    array = (Type *)malloc(sizeof(Type) * length);
    for ( int i = 0; it != list.end(); i++, it++ ) {
        array[i] = *it;
    }
    current = array;
    endArray = current + length;
}

template <class Type>
ArrayList<Type>::ArrayList(iterator first, iterator last) {
    length = last - first;
    array = (Type *)malloc(sizeof(Type) * length);
    for ( int i = 0; i < length; i++ ) {
        array[i] = *first+i;
    }
    current = array;
    endArray = array + length;
}


template <class Type>
ArrayList<Type>::~ArrayList() { delete [] array; }

template <class Type>
void ArrayList<Type>::assign(size_t number, const Type values) {
    insert(begin(), number, values);
    erase(begin()+number, end());
}

template <class Type>
void ArrayList<Type>::assign(iterator first, iterator last) {
    insert(begin(), first, last);
    erase(begin() + (last - first), end());
}

template <class Type>
bool ArrayList<Type>::empty() {
    return size() <= 0;
}

template <class Type>
size_t ArrayList<Type>::size() { return length; }

template <class Type>
void ArrayList<Type>::push_back(const Type& value) {
      insert(end(), value);
}

template <class Type>
void ArrayList<Type>::pop_back() {
    iterator tmp = end();
    tmp--;
    erase(tmp);
}

template <class Type>
void ArrayList<Type>::reserve(size_t number) {
    if ( capacity() < number ) {
        array = (Type *)realloc(array, sizeof(Type) * number);
    }
}

template <class Type>
void ArrayList<Type>::resize(size_t newSize) {
    if ( newSize <= 0 ) {
        this->clear();
    } else {
        array = (Type *)realloc(array, sizeof(Type) * newSize);
        length = newSize;
        endArray = array + newSize;
    }
}

template <class Type>
void ArrayList<Type>::resize(size_t newSize, Type fillValues) {
    if ( newSize <= 0 ) {
        this->clear();
    }
    if ( newSize > length ) {
        insert(end(), newSize-length, fillValues);
    } else {
        array = (Type *)realloc(array, sizeof(newSize));
        length = newSize;
        endArray = array + newSize;
    }
}

template <class Type>
void ArrayList<Type>::clear() {
    array = (Type *)realloc(array, 0);
    current = array;
    endArray = array;
    length = 0;
}

template <class Type>
void ArrayList<Type>::swap(ArrayList<Type>& other) {
    ArrayList<Type> temp = other;
    other = *this;
    *this = temp;
}

template <class Type>
ArrayList<Type>& ArrayList<Type>::operator=(ArrayList<Type>& otherList) {
    if ( this != & otherList ) {
        length = otherList.size();
        iterator it = otherList.begin();

        array = (Type *)malloc(sizeof(Type) * length);
        for ( int i = 0; it != otherList.end(); i++, it++ ) {
            array[i] = *it;
        }
        current = array;
        endArray = current + length;

        return *this;
    }
}

template <class Type>
Type& ArrayList<Type>::operator[](size_t index) const {
    return array[index];
}

template <class Type>
void ArrayList<Type>::operator++(Type) { current++; }

template <class Type>
bool operator==(const ArrayList<Type>& first, const ArrayList<Type>& second) {
    const Type *firstIt = first.begin();
    const Type *secondIt = second.begin();
    for ( ; firstIt != first.end(); firstIt++, secondIt++ ) {
        if ( *firstIt != *secondIt ) {
            return false;
        }
    }
    return true;
}

template <class Type>
bool operator!=(const ArrayList<Type>& first, const ArrayList<Type>& second) {
    return !(first == second);
}

template <class Type>
bool operator<(const ArrayList<Type>& first, const ArrayList<Type>& second) {
    const Type *first1 = first.begin();
    const Type *first2 = first.end();
    const Type *second1 = second.begin();
    const Type *second2 = second.end();

    for ( ; first1 != first2; first1++, second1++ ) {
        if ( second1 == second2 || *second1 < *first1 ) {
            return false;
        } else if ( *first1 < *second1 ){
            return true;
        }
    }
    return (second1 != second2);
}

template <class Type>
bool operator>(const ArrayList<Type>& first, const ArrayList<Type>& second) {
    return !(first<second);
}

template <class Type>
bool operator<=(const ArrayList<Type>& first, const ArrayList<Type>& second) {
    const Type *first1 = first.begin();
    const Type *first2 = first.end();
    const Type *second1 = second.begin();
    const Type *second2 = second.end();

    for ( ; first1 != first2; first1++, second1++ ) {
        if ( second1 == second2 || *second1 < *first1 ) {
            return false;
        } else if ( *first1 <= *second1 ){
            return true;
        }
    }
    return (second1 != second2);
}

template <class Type>
bool operator>=(const ArrayList<Type>& first, const ArrayList<Type>& second) {
    return !(first<=second);
}

#endif // ARRAYLIST_HPP
