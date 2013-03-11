#include <iostream>

using namespace std;

class A {
public:
    A() { cout << "Constr A\n"; }
    ~A() { cout << "Destr A\n"; }

    void print() { cout << "Print A\n"; }
};

class B : public A {
public:
    B() { cout << "Constr B\n"; }
    ~B() { cout << "Destr B\n"; }

    virtual void print() { cout << "Print B\n"; }
};

class C : public B {
public:
    C() { cout << "Constr C\n"; }
    ~C() { cout << "Destr C\n"; }

    void print() { cout << "Print C\n"; }
};


int main() {

    B *obj = new C;
    obj->print();
    obj->A::print();

    delete obj;


    return 0;
}