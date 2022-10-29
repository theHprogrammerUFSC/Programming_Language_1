// FILE:                    ProgramDivision.c
// TITLE:                   Program Division
// SUBMITTED BY:            Helder Henrique da Silva
//                          "All codeis my on except where credited to others. - Sample code of programming language class material"
// FOR COURSE:              Programming I
// DUE DATE:                April 02, 2021
//
// PURPOSE:
// The program was designed to train the C language and a recursion application, preprocessor directives 
// and program divided into two files. The program will be separated into two files, one .c and the 
// other .h, in order to create a factorial number operation.
//
// OVERALL METHOD: 
// The list of general tasks is:
// 1. The factorial.h file is contained in a function to perform the factorial operation.
// 2. Declaration of variables in the main function to receive the factorial function.
//
// FUNCTIONS:
// "factorial.h"
// 
//
// INCLUDE FILES:
// "stdio.h"
// "factorial.h"
//
// DATA FILES: none

/****************************************************************************************************************************/

#include <stdio.h>
#include "factorial.h"

#define N 10

int main()
{
    int i;
    int v[N];

    for (i = 0; i < 10; i++)
    {
        v[i] = factorial(i);
    }

    for (i = 0; i < 10; i++)
    {
        printf("\n %i! = %i", i, v[i]);
    }
    
    return 0;
}