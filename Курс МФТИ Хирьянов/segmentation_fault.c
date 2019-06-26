#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void foo(int *pointer)
{
    assert(pointer);
    *pointer = 0;   //potential Segmentation fault
}

int main()
{
    int *p = NULL;     // Unitialized pointer!
    //*p = 10;    // Using it => Segmentation fault!

    //foo(p);      //Another use of unitialized pointer => Segmentation fault!

    int x = 100;
    scanf("%d", x);

    return 0;
}
