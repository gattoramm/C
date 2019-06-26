#include <stdio.h>

int main(int args, char* argv[])
{
    int x = -12345;

    while(x != 0)
    {
        printf("%d %d\n", x/10, x%10);
        x /= 10;
    }

    if (!0)
        printf("1");
    return 0;
}
