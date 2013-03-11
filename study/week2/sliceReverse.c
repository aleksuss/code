#include <stdio.h>

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int temp = array[hi];
        array[hi] = array[lo];
        array[lo] = temp;
    }
}


int main() {
    int array[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    sliceReverse(array, 1, 18);
    
    for ( int i = 0; i < 11; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}  


/*
Условие задачи
Написать функцию:
void sliceReverse(int array[], int lo, int hi)
Осуществить реверс части массива от lo до hi включительно.
*/