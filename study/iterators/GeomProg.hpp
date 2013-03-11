#ifndef GOEM_PROG_HPP
#define GOEM_PROG_HPP
#include <cmath>

template <class Type>

class GeomProg {
    private:
        Type first;
        Type last;
        Type step;
        int index;
        Type current;
        bool over;
    
    public:
        GeomProg(Type, int, Type);
    
        bool isOver();
        Type& start();
        Type& end();
        Type& operator*();
        Type& operator[](Type);
        void operator++(int);
};

template<class Type>GeomProg<Type>::GeomProg(Type first, int index, Type step) :
    first(first),
    index(index),
    step(step),
    last(pow(step, index)),
    current(first),
    over(first>last) {}

template<class Type>bool GeomProg<Type>::isOver() { return over; }
template<class Type>Type& GeomProg<Type>::start() { return first; }
template<class Type>Type& GeomProg<Type>::end() { return last; }
template<class Type>Type& GeomProg<Type>::operator*() { return current; }
template<class Type>Type& GeomProg<Type>::operator[](Type x) { return pow(step, x); }
template<class Type>void GeomProg<Type>::operator++(int) { 
    Type nextValue = current * step;
    
    if ( nextValue > last ) {
        over = true;
    } else {
        current = nextValue;    
    }
}

#endif
