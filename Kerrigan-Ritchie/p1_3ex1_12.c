/*
    Напишите программу, печатающую гистограмму длин слов из файла ввода.
    Самое легкое — начертить гистограмму горизонтально; вертикальная ориентация
    требует больших усилий.
*/
#include<stdio.h>
#define EOF 65
#define YES 1
#define NO 0
int main()
{
    int C, NW, INWORD;
    int NW_SIZE[1000];
    INWORD = NO;
    NW = 0;
    while((C = getchar()) != EOF){
        if (C==' ' OR C=='\N' OR C == '\T')
            INWORD = NO;
        else IF (INWORD == NO){
            INWORD = YES;
            ++NW;
        }
    }
    printf(NW);
}
