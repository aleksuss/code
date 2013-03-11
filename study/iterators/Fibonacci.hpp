#ifndef FIBONACCI_HPP
#define FIBONACCI_HPP

class Fibonacci {
    private:
        int number;
        int current;
        int first;
        int second;
        bool negative;
        bool over;
        
    public:
        Fibonacci(int);
        long long result();
        int operator*();
        void operator++(int);
        bool isOver();
    
};

Fibonacci::Fibonacci(int number) : number(number) {
    if ( number == 0 ) {
        current = 0;
        over = true;
    }
    if ( number < 0 ) {
        current = 1;
        over = false;
        first = 1;
        second = 0;
    }
    if ( number > 0 ) {
        current = 0;
        over = false;
        first = 0;
        second = 1;
    }
}

void Fibonacci::operator++(int) {
    if ( negative && current < abs(this->result()) ) {
        current = second - first;
        second = first;
        first = current;
    } else if ( current < this->result() ) {
        current = first + second;
        first = second;
        second = current;
    } else {
        over = true;
    }
}

int Fibonacci::operator*() { return current; }

bool Fibonacci::isOver() { return over; }

long long Fibonacci::result() {
    long long result= 0;
    int a = 0;
    int b = 1;

    if ( number < 0 ) {
        number *= -1;
        negative = true;
    }
    if ( number == 0 ) {
        return 0;
    }
    if ( number < 2 ) {
        return 1;
    }
    for ( int i = 1; i < number; i++ ) {
        result = a + b;
        a = b;
        b = result;
    }
    if ( negative && number % 2 == 0 ) {
        return result * -1;
    } else {
        return result;
    }
}

#endif
