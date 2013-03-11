#include <stdio.h>

int benchmark(int n) {
    if ( n <= 0 ) {
        return 1;
    }
    printf("1\n");
    return benchmark(n/2) + benchmark(n/2);
}

int main()
{   
    int x;
    scanf("%d", &x);
    benchmark(x);
    return 0;
}