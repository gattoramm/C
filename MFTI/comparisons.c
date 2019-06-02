#include <stdio.h>
#include <stdbool.h>

int main(int args, char* argv[])
{
    int x, y, z, k;

    x = (5 > -1);
    y = (5u > -1);
    z = (5 > -1) + (3 <= 4);
    k = (5 > -1) + (3 <= 4) + (2*2 == 2+2);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("k = %d\n", k);

    return 0;
}
