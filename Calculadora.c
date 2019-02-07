#include <stdio.h>

void main()
{
    int x, y;
    char signo;

    printf("        /*Calculadora de enteros simple*/\n");
    printf(" Introduce el algoritmo a calcular [x ? y]\n");
    scanf("%d %c %d", &x, &signo, &y);

    switch(signo)
    {
        case '+' : printf("Resultado: %d", x + y); break;
        case '-' : printf("Resultado: %d", x - y); break;
        case '*' : printf("Resultado: %d", x * y); break;
        case '/' : printf("Resultado: %d", x / y); break;
        case '%' : printf("Resultado: %d", x % y); break;
        default  : printf("El algoritmo introducido es incorrecto");
    }
}
