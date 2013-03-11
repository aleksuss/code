#include <iostream> 

int (*s)(int, int);
int sum(int, int);
int main() {
    int x = 6;
    int y = 4;
    s = &sum;
    int z = s(x, y);

    std::cout << z << std::endl;

    return 0;
}

int sum(int a, int b) {
    return a + b;
}