// epic win
#include <stdio.h>

#define LIMIT 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = 0;
    
    for ( int x; len < LIMIT && fscanf(in, "%d", &x) == 1; len++ );
    fclose(in);
    
    fprintf(out, "%d\n", len);
    fclose(out);
    
    return 0;
}

/*
Условие задачи

Считать из файла task.in последовательность чисел размером не более 100 элементов.
Посчитать длину последовательности и вывести ее в task.out.
Пример ввода
10 20 30 40 50 60 70 80 90 100
Пример вывода
10
*/

