#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vPtr;  // Pointer
    int arraySize;
    int i;

    printf("\n Input array size: ");
    scanf("%d", &arraySize);

    // Memory allocation
    vPtr = (int*) malloc(arraySize*sizeof(int));

    // Data input
    printf("\n Data input: \n");

    for (i = 0; i < arraySize; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vPtr[i]);
    }

    // Data output
    printf("\n Data output: \n");

    for (i = 0; i < arraySize; i++)
    {
        printf("v[%d] = %i \n", i, vPtr[i]);
    }

    return 0;
}