#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vPtr;  // Pointer
    int *auxPtr;  // Pointer
    int arraySize;
    int i;

    printf("\n Input array size: ");
    scanf("%d", &arraySize);

    // Memory allocation
    vPtr = (int*) malloc(arraySize*sizeof(int));

    // Data input
    printf("\n Data input: \n");

    auxPtr = vPtr;
    for (i = 0; i < arraySize; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", auxPtr);
        auxPtr++;
    }

    // Data output
    printf("\n Data output: \n");

    auxPtr = vPtr;
    for (i = 0; i < arraySize; i++)
    {
        printf("v[%d] = %i \n", i, *auxPtr);
        auxPtr++;
    }

    return 0;
}