#include <stdio.h>

int benchmark(int n) {
    if ( n <= 0 ) {
        return 1;
    }
    printf("1\n");
    return benchmark(n/2) + benchmark(n/2);
}

int int main(int argc, char const *argv[])
{
    benchmark(5);
    return 0;
}