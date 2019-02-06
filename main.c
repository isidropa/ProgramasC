    ///Programa que cálcula el domingo de Pascua de un año determinado

#include <stdio.h>

int main()
{
    int A,B,C,D,E,N,anyo;

    printf("De que anyo quieres saber el dia del domingo de Pascua? ");
    scanf("%d", &anyo);
    //IMPORTANTE: operador dirección (&) para guardar valores

    //ecuaciones de calculo
    A = anyo % 19;
    B = anyo % 4;
    C = anyo % 7;
    D = (19 * A + 24) %30;
    E = (2 * B + 4 * C + 6 * D + 5) % 7;
    N = (22 + D + E);

    //operador ternario (?:) como sentencia if-else
    N <= 31 ? printf("Domingo de Pascua: %d de Marzo de %d", N, anyo)
        : printf("Domingo de Pascua: %d de Abril de %d", N - 31, anyo);
    //N indica los días del mes de Marzo,
    // pero si sobrepasa 31 estaremos en el mes de Abril
}
