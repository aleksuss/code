#include <stdio.h>

#define SIZE 13

void arrayShift(int array[], int size, int shift) {
    int buffersize = size / 2;
    int buffer[buffersize];
    
    shift %= size;
    if ( shift < 0 ) {
        shift += size;
    }
    if ( shift <= buffersize ) {
        for ( int i = size - shift, j = 0; i < size; i++, j++ ) {
            buffer[j] = array[i];
        }
        for ( int i = size - 1, j = size - 1 - shift; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = buffer[i];
        }
    } else {
        for ( int i = size - 1 - shift; i >= 0; i-- ) {
            buffer[i] = array[i];
        }
        for ( int i = 0, j = size - shift; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = size - 1, j = size - 1 - shift; j >= 0; i--, j-- ) {
            array[i] = buffer[j];
        }
    }
}

int main() {
    int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
    int shift;

    scanf("%d", &shift);
    arrayShift(array, SIZE, shift);
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
