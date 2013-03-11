// epic win
#include <stdio.h>

int strLen(char str[]) {
    int len = 0;
    for ( ; str[len] != 0 len++ );
    return len;
}