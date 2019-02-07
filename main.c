#include <stdio.h>

int main()
{
    float num, condicion;
    float max = 0, min = 0, sumando = 0;
    int contador = 0;

    printf("        /*Calculo max, min y media de N numeros*/\n");
    do
    {
        printf("Introduce el %d\xA7 numero\n", contador + 1); // \xA7 == º
        scanf("%f", &num);

        if(contador == 0) max = min = num;  //la primera vez max=min=num
        if(num > max) max = num;
        if(num < min) min = num;
        sumando += num;
        contador++;

        printf("Quieres introducir otro numero? si [1] no [-1] ");
        scanf("%f", &condicion);
    }while(condicion != -1);

    printf("El numero maximo es: %.2f\n", max);
    printf("El numero minimo es: %.2f\n", min);
    printf("La media es: %.2f\n", sumando / contador);
}
