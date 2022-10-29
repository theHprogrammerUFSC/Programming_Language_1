#include <stdio.h>

int main()
{
    int y = 5;  //actual variable declaration
    int *yPtr;  // pointer variable declaration

    yPtr = &y; // store address of var in pointer variable

    printf("Address of y variable: %p \n", &y);

    //Address stored in pointer variable
    printf("Address stored in yPtr variable: %p \n", yPtr);

    //y value
    printf("Value of y: %d \n", y);
    //access the value using the pointer
    printf("Value of *yPtr variable: %d \n", *yPtr);

    // *& and &*
    printf("Value of *& yPtr: %p \n", *&yPtr);
    printf("Value of *& yPtr: %p \n", *&yPtr);
    
    return 0;
}