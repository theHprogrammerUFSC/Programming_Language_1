#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *matPtr;

    matPtr = (int*) malloc(4*3*sizeof(int));

    *(matPtr + 2*3+3) = 30;

    printf("%i", *(matPtr + 2*3+3));

    return 0;
}