#include <stdio.h>
#include <math.h>
float media(float c[], int t)
{
    float suma=0;
    for(int i=0; i<t; i++)
        suma += c[i];
    return (suma/t);
}
float varianza(float c[], int t, float med)
{
    float sumatorio=0;
    for(int i=0; i<t; i++)
        sumatorio += pow(c[i] - med, 2);
    return sumatorio/t;
}

void main()
{
    float conjunto[51] = {0.0}, med=0.0, var=0.0;
    int TAM=0;
    char condicion='0';
    puts("\t\tCalculo de la media, desviacion y varianza \
de un conjunto de datos");

    while(TAM<51 && condicion!='n')
    {
        printf("n\xA7 %d: ", TAM+1);
        scanf("%f", &conjunto[TAM]);
        TAM++;
        do
        {
            fflush(stdin);
            printf("Otro? SI[s] NO[n]: ");
            scanf("%c", &condicion);
        }while(condicion!='s' && condicion!='n');
    }

    med = media(conjunto, TAM);
    var = varianza(conjunto, TAM, med);
    printf("\nMedia:      %.3f", med);
    printf("\nVarianza:   %f", var);
    printf("\nDesviacion: %f\n", sqrt(var));
}
