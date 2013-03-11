#include <iostream>

using namespace std;

template <typename Type> Type increment(Type value) {
    Type result = value * 1000;
    
    return result;
}

char increment(char value) {
    char result = value + 1;
    
    return result;
}

int main() {
    cout << increment<long long>(42) << endl;
    cout << increment(42.5) << endl;
    cout << increment(-42) << endl;
    cout << increment(42000000000000000) << endl;
    cout << increment('B') << endl;
    
    return 0;
}
