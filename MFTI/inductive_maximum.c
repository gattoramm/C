#include<stdio.h>
#include<stdbool.h>

int main()
{
    int m = 0;

    while(true)
    {
        int x;
        scanf("%d", &x);
        if (x == 0) break;

        m = x > m? x: m;
    }

    printf("maximum = %d\n", m);

    return 0;
}
