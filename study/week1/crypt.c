#include <stdio.h>

int main() {
    int plain1, encrypted1;
    int plain2, encrypted2;
    int length;
    int keyA, keyB;
    int input, output;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    keyA = (encrypted2 - encrypted1) / (plain2 - plain1);
    keyB = encrypted1 - plain1 * keyA; 
    
    for ( int i = 1; i < length; i++ ) {
        scanf("%d", &input);
        output = (input - keyB) / keyA;
        printf("%d ", output);
    }
    scanf("%d", &input);
    output = (input - keyB) / keyA;
    printf("%d\n", output);
    
    return 0;
}

/*
Условие задачи

Числа шифруются по определенному алгоритму с двумя секретными числовыми ключами – A и B.
Число умножается на значение ключа A, затем к результату прибавляется значение ключа B.
Шифруемые числа и значения ключей не превышают по модулю 30000.
В ходе разведывательной операции стали известны зашифрованные эквиваленты двух чисел.
Необходимо найти подходящие ключи и расшифровать зашифрованную последовательность чисел.

Входные данные:
plain1 encrypted1
plain2 encrypted2
length
<последовательность length зашифрованных чисел>

Пример ввода

1 3
2 5
5
7 9 11 13 15


Пример вывода

3 4 5 6 7


Пояснение

В процессе шифрования числа умножали на A = 2, затем к результату добавляли B = 1.
1 * A + B = 3
2 * A + B = 5
*/