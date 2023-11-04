#include <stdio.h>
#include<stdbool.h>
#include <iso646.h>

void print_array(int A[], int N)
{
    for(int i = 0; i < N; ++i)
        printf(" %3d ", A[i]);
    printf("\n");
}

int main(int args, char* argv[])
{
    int counters[10] = {0};
    int x;
    while (true)
    {
        scanf("%d", &x);
        if (x == 10) break;
        if (x < 0 or x > 9) continue;
        counters[x] += 1;
    }

    for (x = 0; x < 10; ++x)
        for (int i = 0; i < counters[x]; ++i)
            printf("%3d ", x);

    return 0;
}
