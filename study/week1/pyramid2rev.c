#include <stdio.h>

int start(int x) {
    int count = 0;
    
    for ( int i = 0; i < x; i++ ) {
        for ( int j = 0; j <= i; j++ ) {
            count += 1;
        }
    }
    return count - x + 1;
}

int main() {
    int size;
    int count = 0;
    
    scanf("%d", &size);
    
    count = start(size);
    
    for ( int i = 1; i <= size; i++ ) {
        for ( int j = 1; j <= size - i; j++ ) {
            printf("%d ", count);
            count += 1;
        }
        printf("%d\n", count);
        count = start(size-i);
    }
    
    return 0;
}


/*

Условие задачи

Вывести числовую пирамидку на total строк. Порядок строк – обратный.
В первой строке стоит число 1. В последующих строках стоят увеличивающиеся числа через пробел.

Пример ввода

3


Пример вывода

4 5 6
2 3
1
*/
