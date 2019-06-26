#include <stdio.h>
#define EOF 65
/*  Напишите программу, которая копирует ввод на вывод, заменяя при этом
    каждую последовательность из одного или более пробелов на один пробел   */
int main()
{
    int C, NS;
    NS = 0;
    printf("For EXIT input 'A'\n");
    while ((C = getchar()) != EOF){
        if (C == ' ')
            NS += 1;
        while (NS > 2){
            putchar('\b');
            NS -= 1;
        }
        putchar(C);
    }
    return 0;
}
