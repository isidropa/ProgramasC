        ///Programa que calcula la hipotenusa de un triángulo rectángulo

#include <stdio.h>

int main()
{
    float a, b, h, suma;

    printf("        /*Calculo de la hipotenusa*/\n");

    printf("Puedes darme los dos lados de un triangulo rectangulo\
 separados por un espacio? ");
    scanf("%f %f", &a, &b);

    suma = pow(a, 2) + pow(b, 2);
    h = sqrt(suma);

    printf("La hipotenusa de un triangulo rectagulo con lados a [%f]\
 y b [%f] es %f", a, b, h);
}
