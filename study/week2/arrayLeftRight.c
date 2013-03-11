#include <stdio.h>

#define SIZE 11


void arrayShiftRight(int array[], int size) {
    int temp = array[0];
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        array[i] = array[i+1];
    }
    array[last] = temp;
}

int main() {
    int array[SIZE] = { 5, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    arrayShiftRight(array, SIZE);
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    
    return 0;
}  
