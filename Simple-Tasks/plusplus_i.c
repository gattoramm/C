#include <stdio.h>
#include <time.h>

int main()
{
    int i = 0;
    i = 6 + ++i + 2000;

    int ii = 0;
    ii = 6 + ii++ + 2000;

    printf("%d, %d\n", i, ii);

    i = 5;
    int a;
    a = ++i;
    printf("a = ++5 = %d, i = %d\n", a, i);

    i = 5;
    a = i++;
    printf("a = 5++ = %d, i = %d\n", a, i);

    i = 5;
    clock_t time1 = clock();
    a = i++ + ++i;
    clock_t time2 = clock();
    printf("a = 5++ + ++5 = %d, i = %d\n", a, i);

    i = 5;
    a = ++i + i++;
    printf("a = ++5 + 5++ = %d, i = %d\n", a, i);

    return 0;
}
