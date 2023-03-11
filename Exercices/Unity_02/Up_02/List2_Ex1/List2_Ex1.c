// FILE:                    List2_Ex1.c
// TITLE:                   Largest and Smallest Element
// SUBMITTED BY:            Helder Henrique da Silva
//                          "All codeis my on except where credited to others."
// FOR COURSE:              Programming I
// DUE DATE:                March 11, 2021
//
// PURPOSE:
// The program was designed to train the C language. It will read the value of fifteen
// elements from a vector and analyze which of them is the largest and the smallest
// element, as well as their respective positions.
//
// OVERALL METHOD: 
// The list of general tasks is:
// 1. Input with variables of type integer.
// 2. Initialization of variables.
// 3. Repeating structure for reading vector elements for processing.
// 4. Selection structure for processing.
// 5. Finalization to show the largest and smallest elements of the vector and their respective positions.
//
// FUNCTIONS: none
//
// INCLUDE FILES:
// "stdio.h"
//
// DATA FILES: none

/****************************************************************************************************************************/

#include<stdio.h>

int main()
{
    int n[16];
    int i, maior, menor;
    int posmaior, posmenor;

    maior = 0;
    menor = 0;
    posmaior = 0;
    posmenor = 0;

    printf("\n Vetor de 15 elementos. \n");
    printf("\n Maior e menor valor e suas respectivas posicoes. \n");

    for (i = 1; i < 16; i++)
    {
        printf("\n Vetor: %i elemento = ", i);
        scanf("%i", &n[i]);

        if (i == 1)
        {
            maior = n[i];
            menor = n[i];
            posmaior = i;
            posmenor = i;
            
        }
        if (n[i] > maior)
        {
            maior = n[i];
            posmaior = i;
        }
        else if (n[i] < menor)
        {
            menor = n[i];
            posmenor = i;
        }       
    }

    printf("\n O maior valor e: %i\n", maior);
    printf("\n A posicao do maior valor e: %i\n", posmaior);

    printf("\n O menor valor e: %i\n", menor);
    printf("\n A posicao do menor valor e: %i\n", posmenor);

    return 0;
}