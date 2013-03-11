// epic win
#include <stdio.h>

void arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    
    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}


/*
Условие задачи
void arrayPrint(FILE *out, int array[], int size)
Функция должна вывести элементы массива через пробел, завершив вывод символом перевода строки.
*/