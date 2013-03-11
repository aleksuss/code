#include <stdio.h>

#define SIZE 100

int lsearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int array[SIZE];
    int needle;
    int size = 1; 
    
    fscanf(in, "%d", &needle);
    
    for ( int i = 0; i < SIZE && fscanf(in, "%d", &array[i]) == 1; i++ ) {
        size += 1;
    }
    fclose(in);
    
    fprintf(out, "%d\n", lsearch(array, size, needle));
    fclose(out);
    
    return 0;
}    




/*
Условие задачи
В файле task.in дано искомое число needle, а также последовательность чисел размером не более 100 элементов.
Найти needle в массиве и вывести в файл task.out его индекс либо -1, если число не найдено.
Пример ввода
40
10 20 30 40 50 60 70 80 90 100

Пример вывода
3
*/