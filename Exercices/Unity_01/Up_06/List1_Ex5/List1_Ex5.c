 #include<stdio.h>

 int main()
 {
    float x, y ,z;

    printf("\n Informe o valor de x: ");
    scanf("%f", &x);

    y = ((2*x) + 5);
    z = ((2*(y*y)) - (3*y) + 7);

    printf("\n x = %.2f \n", x);
    printf("\n y = %.2f \n", y);
    printf("\n z = %.2f \n", z);
    
    return 0;
 }