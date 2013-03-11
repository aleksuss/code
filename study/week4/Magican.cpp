/*
g++ -c hello.cpp -o main.o Compile only ... For compile single source file only
g++ hello.cpp ClassComp.o
g++ 1.o 2.o -o progr */
#include <iostream>

using namespace std;

class Magican {
private:
    static Magican* lastMagican;
    static int id;
    string name;
public:
    Magican() {
        id += 1;
        name = "";
        lastMagican = this;
    }
    Magican(Magican& m) {
        id += 1;
        name = "";
        lastMagican = this;
    }
    static int getId() { return id; }
    string getName() { return name; }
    void setName(string n) { name = n; }
    static string getLastName() { return lastMagican->name; }
};

int Magican::id = 0;
Magican* Magican::lastMagican = NULL;

int main() {
    //Magican a;
    //Magican b, c;
    //a.setName("Joe");
    //b.setName("Bill");
    //c.setName("Cooper");

    //cout << b.getName() << " - " << b.getId() << endl;
    cout << Magican::getLastName() << endl;

    return 0;
}