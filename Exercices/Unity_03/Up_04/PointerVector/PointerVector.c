#include <stdio.h>

const int arraysize = 10;

int main()
{
    int v[] = {10, 100, 200, -3, 1, 0, 45, 67, 8, 23};
    int i, *ptr[arraysize];

    for (i = 0; i < arraysize; i++)
    {
        ptr[i] = &v[i]; //assing the address of integer.
    }

    for (i = 0; i < arraysize; i++)
    {
        printf("\n Value of v[%d] = %d \n", i, *ptr[i]);
        printf(" Address of v[%d] = %p \n", i, ptr[i]);
    }
    
    return 0;
}