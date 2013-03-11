#include <stdio.h>

int main() {
    int dividend, divisor;
    int multiple;
    
    scanf("%d %d", &dividend, &divisor);
    
    if ( divisor < 0 ) {
        divisor *= -1;
    }
    
    multiple = dividend - dividend % divisor;
    
    if ( multiple < dividend ) {
        multiple += divisor;
    }
    printf("%d", multiple);
    
    return 0;
}

/*
Условие задачи

Считать с клавиатуры два целых числа - делимое и делитель, причем делитель не равен нулю.
Вывести на экран наименьшее число, кратное делителю, не меньшее делимого.

Пример ввода

15 6

Пример вывода

18
*/