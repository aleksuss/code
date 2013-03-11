#ifndef FACTORIAL_HPP
#define FACTORIAL_HPP

class Factorial {
private:
    int number;
    long long current;
    int multiplyer;
    bool over;
    
public:
    Factorial(int);
    
    bool isOver();
    void operator++(int);
    long long operator*();
    long long result();    
};

Factorial::Factorial(int number) :
    number(number),
    current(1),
    multiplyer(2),
    over(number>this->result()) {}

bool Factorial::isOver() { return over; }

long long Factorial::result() {
    long long result = number;
    
    for ( int i = number - 1; i > 0; i-- ) {
        result *= i;
    }
    return result;
}

long long Factorial::operator*() {
    return current;
}

void Factorial::operator++(int) {
    long long nextValue = current * (multiplyer);
    
    if ( nextValue > this->result() ) {
        over = true;
    } else {
        current = nextValue;
        multiplyer += 1;
    }
}

#endif
