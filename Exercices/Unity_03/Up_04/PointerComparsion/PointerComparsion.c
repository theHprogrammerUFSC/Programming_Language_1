#include <stdio.h>

const int arraysize = 10;

int main()
{
    int v[] = {10, 100, 200, -3, 1, 0, 45, 67, 8, 23};
    int i, *ptr;

    i = 0;
    ptr = v;

    while (ptr <= &v[arraysize - 1])
    {
        printf("\n Address of v[%d] = %p \n", i, ptr);
        printf(" Value of v[%d] = %d \n", i, *ptr);

        ptr++;
        i++;
    }
    
    return 0;
}