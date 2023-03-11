#include <stdio.h>
#include <math.h>

//Functions

inCircle (float x_c, float y_c, float x_point, float y_point, float R);

int main()
{
    float x_c, y_c, x_point, y_point, R;

    printf("\n Programa que determina se pontos de coordenadas encontram-se dentro de uma circunferencia \n");

    printf("\n Coordenada do centro da circunferencia (x_c,y_c) \n");
    printf("\n x_c = ");
    scanf("%f", &x_c);
    printf("\n y_c = ");
    scanf("%f", &y_c);

    printf("\n\n Informe o raio (R) da circunferencia: ");
    scanf("%f", &R);

    printf("\n Informe os pontos que deseja verificar se estao dentro da circunferencia. \n");
    printf("\n X = ");
    scanf("%f", &x_point);
    printf("\n Y = ");
    scanf("%f", &y_point);

    inCircle (x_c, y_c, x_point, y_point, R);

    return 0;
}

inCircle (float x_c, float y_c, float x_point, float y_point, float R)
{
    float D, result;

    D = pow(R, 2);
    result = pow((x_point - x_c), 2) + pow((y_point - y_c), 2); 

    if (result <= D)
    {
        printf("\n O ponto esta dentro da circunferencia. \n");
    }
    else
    {
        printf("\n O ponto nao esta dentro da circunferencia. \n");
    }

    return;
}