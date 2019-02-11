#include <stdio.h>
#include <time.h>

void bucle_normal(int num)
{
    for(int i=0; i<=num; i++);
}
void bucle_register(int num)
{
    for(register int i=0; i<=num; i++);
}

void main()
{
    int vueltas;
    float inicio, fin, tiempo1, tiempo2;
    puts("\t\tPrueba de velocidad de variable register");
    printf("Dame el numero de vueltas del bucle for: ");
    scanf("%d", &vueltas);

    inicio = clock();
    bucle_normal(vueltas);
    fin = clock();
    tiempo1 = (fin - inicio) / CLK_TCK;

    inicio = clock();
    bucle_register(vueltas);
    fin = clock();
    tiempo2 = (fin - inicio) / CLK_TCK;

    printf("Una variable local normal tarda %f segundos\n", tiempo1);
    printf("Una variable local register tarda %f segundos\n", tiempo2);
}
