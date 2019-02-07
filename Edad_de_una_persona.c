#include <stdio.h>

void main()
{
    int d_n, m_n, a_n, d_a, m_a, a_a;
    int resta_d, resta_m, resta_a;
    int opcion;

    printf("        /*Calculo de la edad de una persona*/\n");
    printf("Introduce la fecha de nacimiento [d m a]\n");
    scanf("%d %d %d", &d_n, &m_n, &a_n);
    printf("Introduce la fecha actual [d m a]\n");
    scanf("%d %d %d", &d_a, &m_a, &a_a);

    resta_a = a_a - a_n;
    resta_m = m_a - m_n;
    resta_d = d_a - d_n;

    if(resta_a >= 1)         opcion = 1;
    else if(resta_d >= 0 &&
            resta_m >= 0 &&
            resta_a >= 0)    opcion = 2;
    else                     opcion = 3;

    switch(opcion)
    {
        case 1 :
            printf("La edad es: %d anyos", resta_a);
            break;
        case 2 :
            printf("La edad es: %d dia(s) y %d mes(es)", resta_d, resta_m);
            break;
        case 3 : default :
            printf("La fecha de nacimiento no puede superar a la actual");
    }
}
