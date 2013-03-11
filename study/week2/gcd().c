//epic win
#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}


int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", gcd(a, b));
    
    return 0;
}

/*
Условие задачи
Написать функцию, которая находит наибольший общий делитель.
int gcd(int a, int b)
Передаваемые значения не равны нулю.
*/