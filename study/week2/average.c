#include <stdio.h>

unsigned int average(unsigned int a, unsigned int b) {
    if ( a % 2 != 0 && b % 2 != 0 && a % 2 == b % 2 ) {
        return (a / 2) + (b / 2) + 1;
    }
        return (a / 2) + (b / 2);
}

int main() {
    unsigned int x, y;
    
    x = 12;
    y = 12;
    
    printf("%d\n", average(x, y));
    
    return 0;
}
    

/*
Условие задачи
unsigned int average(unsigned int a, unsigned int b)
Вернуть среднее арифметическое двух положительных целых чисел. Использовать только тип unsigned int.
Если среднее значение не является целым, то округлить его к ближайшему целому в меньшую сторону.
*/