#include<stdio.h>

int main()
{
    int i = 17;
    char c = "c"; //ascii value is 99
    char d = "d"; //ascii value is 102
    int sum_i;
    float sum_f;
    
    sum_i = i + d;
    printf("\n Soma (int) = %d \n", sum_i);

    sum_f = i + d;
    printf("\n Soma (float) = %f \n", sum_f);

    return 0;
}