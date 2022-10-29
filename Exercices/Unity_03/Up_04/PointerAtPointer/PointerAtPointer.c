#include <stdio.h>

int main()
{
    int var;
    int *ptr;
    int **pptr;

    var = 5;

    ptr = &var;     //take the address of var.

    pptr = &ptr;    //take the address of ptr using address of operator &.

    //take the value using pptr.

    printf("\n Value of var = %d ", var);
    printf("\n Address of var = %p \n", &var);
    printf("\n ------------------------------- \n");

    printf("\n Value available at *ptr = %d ", *ptr);
    printf("\n Address of ptr = %p ", &ptr);
    printf("\n Address stored in ptr = %p \n", ptr);
    printf("\n ------------------------------- \n");

    printf("\n Value available at **pptr = %d ", **pptr);
    printf("\n Address of pptr = %p ", &pptr);
    printf("\n Address stored in pptr = %p \n", pptr);
    
    return 0;
}