#ifndef NATURAL_HPP
#define NATURAL_HPP

class Natural {
    private:
        long long number;
        long long current;
        bool over;
    public:
        Natural(long long);
        void operator++(int);
        long long operator*();
        bool isOver();
};
Natural::Natural(long long n) : current(1) {
    if ( n < 1 ) {
        over = true;
        std::cout << "Sorry, but it's not a natural number!" << std::endl; // Or use Exception
        number = current = -1;
    } else {
        number = n;
        over = false;
    }
}

bool Natural::isOver() { return over; }

long long Natural::operator*() { return current; }

void Natural::operator++(int) {
    if ( current >= number ) {
        over = true;
    } else {
        current += 1; 
    }
}

#endif
