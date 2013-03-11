#include <stdio.h>

int progres(int n, int step) {
    if ( n <= 1 ) {
        return 1;
    }
    return progres(n-1, step) + step;
}

long int factorial(int n) {
    printf("Hello !!!\n");
    if ( n == 0 ) {
        return 1;
    }
    if ( n < 0 ){
        return factorial(n - 1) * -n;
    }
    return factorial(n - 1) * n;

}

int fibonacci(int n) {
    printf("Hello !!!\n"); 
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

int main(int argc, char * argv) {
    int N; // = argv[0];

    scanf("%d", &N);

    // O(1)
    /*for ( int i = 0; i < 12; i++ ) {
        for ( int i = 0; i < 6; i++ ) {
            printf("Hello!\n");
        }
    }*/
    printf("%d\n", fibonacci(N));

    // O(logN)
    /*for ( int i = 567; i < N; i /= 3 ) {
        for ( int i = 0; i < 6; i++ ) {
            printf("Hello!\n");
        }
    } */       

    // O(N)
    /*for ( int i = 0; i < N; i++ ) {
        for ( int i = 0; i < 6; i++ ) {
            printf("Hello!\n");
        }
    }*/

    // O(Inf) 
    /*for ( int i = 0; i < N; i /= 3 ) {
        for ( int i = 0; i < 6; i++ ) {
            printf("Hello!\n");
        }
    } */      




    return 0;
}