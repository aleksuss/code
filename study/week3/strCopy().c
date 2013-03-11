#include <stdio.h>

void strCopy(char target[], char source[]) {
    int i;
    
    for ( i = 0; source[i] != 0; i++ ) {
        target[i] = source[i];
    }
    target[i] = 0;
}


int main() {
    char strIn[100] = { 'A', 'l', 'e', 'x', ' ', 'H', 'e', 'l', 'l', 'o' };
    char strOut[100];

    //scanf("%s", strIn);
    strCopy(strOut, strIn);
    printf("%s\n", strOut);
}


/*
Условие задачи
void strCopy(char target[], char source[])
Гарантируется, что строка target не короче строки source.
*/