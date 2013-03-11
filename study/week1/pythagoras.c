#include <stdio.h>

int getNumberWidth(int number) {
    int result = 0;

    for ( int i = number; i > 0; ) {
        i /= 10;
        result += 1;
    }

    return result;
}

int main() {
    int xMin, xMax;
    int yMin, yMax;
    int widthRowHeader, widthProduct;
    int i, j;

    scanf("%d %d %d %d", &xMin, &xMax, &yMin, &yMax);

    widthRowHeader = getNumberWidth(yMax);
    widthProduct = getNumberWidth(xMax*yMax);

    printf(" %*s |", widthRowHeader, "");
    for ( i = xMin; i <= xMax; i++ ) {
        printf(" %*d", widthProduct, i);
    }
    printf("\n");

    i = (widthRowHeader + 2);
    for ( ; i >= 1; i-- ) {
        printf("-");
    }
    printf("+");
    i = (widthProduct + 1) * (xMax - xMin + 1);
    for ( ; i >= 1; i-- ) {
        printf("-");
    }
    printf("\n");

    for ( j = yMin; j <= yMax; j++ ) {
        printf(" %*d |", widthRowHeader, j);
        for ( i = xMin; i <= xMax; i++ ) {
            printf(" %*d", widthProduct, j*i);
        }
        printf("\n");
    }

    return 0;
}


/*
Условие задачи

Нарисовать таблицу Пифагора (умножения) с форматированием и разметкой для заданных диапазонов по горизонтали и вертикали.
Расстояние от края экрана до чисел в заголовке строк - не менее одного пробела.
Расстояние от вертикальной черты до чисел - не менее одного пробела.
Расстояние между числами в таблице - не менее одного пробела.
Ширина всех колонок должна быть одинаковой.
В вопросе расставления пробелов руководствуйтесь здравым смыслом и примером.
Также решение одной из других задач может существенно помочь.

Пример ввода

7 11 7 11


Пример вывода

    |   7   8   9  10  11
----+--------------------
  7 |  49  56  63  70  77
  8 |  56  64  72  80  88
  9 |  63  72  81  90  99
 10 |  70  80  90 100 110
 11 |  77  88  99 110 121
 */