#include <stdio.h>

int main()
{
    int v[10] = {10, 100, 200, -3, 1, 0, 45, 67, 8, 23};
    int i;
    int *ptr;

    //let us have array address in pointer

    ptr = v;

    for (i = 0; i < 10; i++)
    {
        printf("\n Address of v[%d] = %p \n", i, ptr);
        printf("Value of v[%d] = %i \n", i, *ptr);

        ptr++;  //move to the next element
    }
    
    return 0;
}