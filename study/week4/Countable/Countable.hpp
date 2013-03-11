#ifndef COUNTABLE_HPP
#define COUNTABLE_HPP
class Countable {
private:
    static int count;
public:
    Countable();
    static int getCount();
};
#endif
