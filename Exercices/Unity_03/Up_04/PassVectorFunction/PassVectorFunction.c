#include <stdio.h>

float getAverage(int *arr, int size);

/****************************************/

int main()
{
    int v[5] = {20, 30, 10, 20, 20};
    double avg;

    avg = getAverage(v, 5);

    printf("Average value is: %.2f \n", avg);

    return 0;
}

/****************************************/

float getAverage(int *arr, int size)
{
    int i, sum = 0;
    float avg;

    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    avg = (float)sum / size;

    return avg;
}