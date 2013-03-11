#include <stdio.h>

int fibonacci(int n) {
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
    if ( n == 0 ) {
        return 0;
    }
    if ( n < 2 ) {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n;
    
    scanf("%d", &n);
    
    printf("%d\n", fibonacci(n));
    
    return 0;
}

/*
Условие задачи

int fibonacci(int n)
Использовать рекурсию.
*/