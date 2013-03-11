#include <iostream>

using namespace std;

class Ident {
    private:
        static int id;
        int ident;

    public:
        Ident() {
            id += 1;
            ident = id;
        }
        Ident(const Ident& i) {
            id += 1;
            ident = id;
        }
        static int getId() { return id; }
        int getIdent() const { return ident; }
 
};

int Ident::id = 0;

 int main() {
    Ident a;
    Ident b;
    Ident c;
    Ident d = a;

    cout << c.getIdent() << Ident::getId() << endl;
    cout << b.getIdent() << Ident::getId() << endl;
    cout << a.getIdent() << Ident::getId() << endl;
    cout << d.getIdent() << Ident::getId() << endl;

    return 0;
}