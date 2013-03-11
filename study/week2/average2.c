#include <stdio.h>

int average(int a, int b) {
    if ( a + b == 1 || a + b == -1 ) {
        return 0;
    }
    if ( a % 2 != 0 && b % 2 != 0 && a % 2 == b % 2 ) {
        if ( a < 0 && b < 0 ) {
            return (a / 2) + (b / 2) - 1;
        } else {
            return (a / 2) + (b / 2) + 1;
        }
    }
        return (a / 2) + (b / 2);
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", average(a, b));
    
}

/*
Условие задачи
int average(int a, int b)
Вернуть среднее арифметическое двух целых чисел. Использовать только тип int.
Если среднее значение не является целым, то округлить его к ближайшему целому в сторону нуля.
*/