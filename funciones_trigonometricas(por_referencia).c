#include <stdio.h>
#include <math.h>
#define PI 3.14159265

void funciones_trigonometricas(float, double*);

void main()
{
    float angulo, radian;
    double soluciones[10];      //array

    puts("\t\t/*Funciones trigonometricas/*");
    printf("Ingresa el angulo(\xA7): ");
    scanf("%f", &angulo);
    radian = angulo*PI/180;

    //paso de array por referencia
    funciones_trigonometricas(radian, &soluciones);
    printf("sen = %lf\n", soluciones[0]);
    printf("cos = %lf\n", soluciones[1]);
    printf("tan = %lf\n", soluciones[2]);
}

//soluciones y sol tienen la misma direccion de memoria
void funciones_trigonometricas(float rad, double *sol)
{
    sol[0] = sin(rad);
    sol[1] = cos(rad);
    sol[2] = tan(rad);
}
