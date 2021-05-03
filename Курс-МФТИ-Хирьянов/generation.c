#include <stdio.h>
/*генератор последовательности*/
int main()
{
    int start, stop, step;
    printf("Generation of procession.\n"
           "Enter start, stop, step:");
    scanf("%d%d%d", &start, &stop, &step);

    int sign = (step > 0)? +1: -1;
    int x = start;
    while(sign * x < sign * stop){
        printf("x = %d\n", x);
        x += step;
    }

    printf("After: x = %d\n", x);

    return 0;
}
