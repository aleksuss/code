#include <stdio.h>

#define SIZE 10

void merge(int array[], int lo, int mid, int hi) {
    int buffer[hi];
    int i = lo;
    int j = mid;
    int k;
    
    for ( k = 0; j < hi && i < mid; k++ ) {
        if ( array[i] < array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }
    for ( int i = lo, j = 0; i < hi; i++, j++ ) {
        array[i] = buffer[j];
    }
}

int main() {
    int array[SIZE] = { 0, 1, 3, 5, 6, 8, 2, 4, 7, 9 };

    merge(array, 0, 6, SIZE);
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}