#include <stdio.h>

int main() {
    int size;
    int counter = 1;
    scanf("%d", &size);
    
    for ( int i = 1; i <= size; i++ ) {
        for ( int j = 1; j < i; j++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
    
    return 0;
}

/*
Условие задачи

Вывести числовую пирамидку на total строк.
В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

Пример ввода

3


Пример вывода

1
2 3
4 5 6
*/
