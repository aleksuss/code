// code works
#include <stdio.h>

#define SIZE 11

void sliceShiftLeft(int array[], int start, int end) {
    int exchange;
    
    if ( start > end ) {
        start = end;
    }
    exchange = array[start];
    for ( ; start < end; start++ ) {
        array[start] = array[start+1];
    }
    array[end] = exchange;
}


int main() {
    int array[SIZE] = { 1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    sliceShiftLeft(array, 15, 10);
    
    for ( int i = 0; i < SIZE; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("\n");
    printf("%lu\n", sizeof(array));
    
    return 0;
}  




/*
Условие задачи
Написать функцию:
void sliceShiftLeft(int array[], int start, int end)
Осуществить циклический сдвиг части массива на один элемент влево от start до end включительно.
*/