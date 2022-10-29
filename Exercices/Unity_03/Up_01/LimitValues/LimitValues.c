#include <stdio.h>
#include <float.h>
#include <limits.h>

int main()
{
    printf("\t\t Using <limits.h> library definitions... \n");

    printf("\n CHAR \n");
    printf("Storage size (bytes): %lu \n", sizeof(char));
    printf("singned char min: %d \n", SCHAR_MIN);
    printf("singned char max: %d \n", SCHAR_MAX);
    printf("unsingned char max: %u \n", UCHAR_MAX);

    printf("\n SHORT \n");
    printf("Storage size (bytes): %lu \n", sizeof(short));
    printf("singned short min: %d \n", SHRT_MIN);
    printf("singned short max: %d \n", SHRT_MAX);
    printf("unsingned short max: %ud \n", USHRT_MAX);

    printf("\n INT \n");
    printf("Storage size (bytes): %lu \n", sizeof(int));
    printf("singned int min: %d \n", INT_MIN);
    printf("singned int max: %d \n", INT_MAX);
    printf("unsingned int max: %u \n", UINT_MAX);

    printf("\n LONG \n");
    printf("Storage size (bytes): %lu \n", sizeof(long));
    printf("singned long min: %ld \n", LONG_MIN);
    printf("singned long max: %ld \n", LONG_MAX);
    printf("unsingned long max: %lu \n", ULONG_MAX);

    printf("\n FLOAT \n");
    printf("Storage size (bytes): %lu \n", sizeof(float));
    printf("singned float min: %e \n", FLT_MIN);
    printf("singned float max: %e \n", FLT_MAX);
        
    printf("\n Double \n");
    printf("Storage size (bytes): %lu \n", sizeof(double));
    printf("singned double min: %e \n", DBL_MIN);
    printf("singned double max: %e \n", DBL_MAX);

    return 0;
}