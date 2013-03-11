#include <stdio.h>

int main() {
    int dividend, divisor;
    int prevMultiple;
    
    scanf("%d %d", &dividend, &divisor);
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    
    prevMultiple = dividend - dividend % divisor;
    
    if ( prevMultiple > dividend ) {
        prevMultiple -= divisor;
    }
    
    printf("%d\n", prevMultiple);
    
    return 0;
}

/*
Условие задачи

Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
Вывести на экран наибольшее число, кратное делителю, не превышающее делимое.

Пример ввода

15 6

Пример вывода

12
*/