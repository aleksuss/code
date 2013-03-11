// code works
#include <stdio.h>

#define SIZE 11

void sliceShiftRight(int array[], int start, int end) {
    int exchange = array[end];
    
    if ( start > end ) {
        start = end;
    }
    for ( ; start < end; end-- ) {
        array[end] = array[end-1];
    }
    array[start] = exchange;
}


int main() {
    int array[SIZE] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    sliceShiftRight(array, 10, 10);
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}  



/*
Условие задачи
Написать функцию:
void sliceShiftRight(int array[], int start, int end)
Осуществить циклический сдвиг части массива на один элемент вправо от start до end включительно.
*/