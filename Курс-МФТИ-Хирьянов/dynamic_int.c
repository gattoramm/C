#include <stdio.h>
#include <stdlib.h>

int main(int args, char* argv[])
{
    int N;
    printf("Enter size of array to create:");
    scanf("%d", &N);

    for (int k = 0; k < 1000; ++k)
    {
        int *A = (char *)malloc(N*sizeof(int));
        if (NULL == A)
        {
            printf("OS didn't gave memory. Exit...\n");
            exit(1);
        }
        for (int i = 0; i < N; ++i)
            A[i] = i;
        free(A);

    }
    printf("Program is on finish!\n");
    system("pause");

    return 0;
}
