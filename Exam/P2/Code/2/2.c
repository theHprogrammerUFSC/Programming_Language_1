#include <stdio.h>

int main()
{
    int v[10] = {15, 17, 12, 13, 14, 15, 16, 17, 18, 19};
    int *vPtr;
    int d, a;

    vPtr = v;
    a= 1;

    d = *(vPtr + a);
    printf("\n d = %d", d);
}