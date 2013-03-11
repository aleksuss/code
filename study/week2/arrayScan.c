#include <stdio.h>
// epic win

int arrayScan(FILE *in, int array[], int limit) {
    int len;
    
    for ( len = 0; len < limit && fscanf(in, "%d", &array[len]) == 1; len++ );
    return len;
}

int main() {
    FILE *in = fopen("task.in", "r");
    //FILE *out = fopen("task.out" "w");
    int array[15];
    int limit = 9;
    
    printf("%d\n", arrayScan(in, array, limit));
    
    return 0;
}    

/*
Условие задачи

int arrayScan(FILE *in, int array[], int limit)
Считать из файла in не более limit элементов в массив array.
Вернуть количество считанных элементов.
*/