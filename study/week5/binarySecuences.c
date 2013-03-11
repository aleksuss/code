#include <stdio.h>

int main() {
    char c;
    int zeros = 0;
    int ones = 0;
    int count = 0;
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    
    for ( ; fscanf(in, "%c", &c) == 1; ) {
        if ( c == '0' ) {
            zeros += 1;
        } else {
            ones += 1;
        }
        count += 1;
    }
    fclose(in);
    printf("%d\n", zeros);
    printf("%d\n", ones);
    fprintf(out, "%d\n", count - ones);
    fclose(out);

    return 0;
}


// code works 
// #include <stdio.h>

// int main() {
//     char c;
//     int zeros = 0;
//     int ones = 0;
//     int exchanges = 0;
//     FILE *in = fopen("task.in", "r");
//     FILE *out = fopen("task.out", "w");
    
//     for ( ; fscanf(in, "%c", &c) == 1; ) {
//         if ( c == '0' ) {
//             zeros += 1;
//         } else {
//             ones += 1;
//         }
//     }
//     fclose(in);
//     in = fopen("task.in", "r");
//     for ( int i = 0; i < zeros; i++ ) {
//         fscanf(in, "%c", &c);
//         if ( c != '0' ) {
//             exchanges += 1;
//         }
//     }
//     fclose(in);
//     fprintf(out, "%d\n", exchanges);
//     fclose(out);
    
//     return 0;
// }

// Условие задачи

// В файле task.in дана последовательность символов – нулей и единиц.
// Вывести в task.out минимально необходимое число обменов пар значений для упорядочивания последовательности по неубыванию.
// Пример ввода

// 1101

// Пример вывода

// 1

// Пояснение

// Необходимо обменять ноль с первой единицей.