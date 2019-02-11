#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void generador_aleatorio(int v[]);
void comprobacion(int v[], int r[]);
void cambio_posicion_numeros(int v[]);

void main()
{
    /*time() devuelve los segundos pasados desde
     00:00:00 UTC, 1 de enero de 1970, por lo
     tanto la semilla cambia en cada programa*/
    srand(time(NULL));

    int vector[20]={0}, res[2]={0};
    int condicion=0;
    generador_aleatorio(vector);

    puts("\t\t/*Vector aleatorio de 20 numeros*/");
    puts("La suma de los 10 primeros numeros no puede \
superar la suma de los 10 ultimos\n");
    printf("Vector aleatorio:  ");
    imprimir(vector);
    comprobacion(vector, res);
    printf("\nSuma 10 primeros: %d\n\
Suma 10 ultimos: %d\n\n", res[0], res[1]);

    do
    {
        if(res[0] <= res[1])
            cambio_posicion_numeros(vector);
        else
            condicion = -1;
        comprobacion(vector, res);
    }while(condicion != -1);

    printf("Vector modificado: ");
    imprimir(vector);
    printf("\nSuma 10 primeros: %d\n\
Suma 10 ultimos: %d\n", res[0], res[1]);
}

void imprimir(int v[])
{
    for(int i=0; i<20; i++)
    {
        printf("%d ", v[i]);
        if(i==9) printf("| ");
    }
}

void generador_aleatorio(int v[])
{
    for(int i=0; i<20; i++)
    {   //Devuelve el resto de (rand() / 51)
        // dando un numero entre 0 y 51-1
        v[i]=rand() % 51;
    }
}

void comprobacion(int v[], int r[])
{
    r[0]=r[1]=0;
    for(int i=0; i<20; i++)
    {
        if(i>=0 && i<10)   r[0]+=v[i];
        if(i>=10 && i<20)  r[1]+=v[i];
    }
}

void cambio_posicion_numeros(int v[])
{
    int min_10_primeros=v[0], pos1=0, aux;
    int max_10_ultimos=v[10], pos2=10;
    for(int i=0; i<20; i++)
    {
        if(i>=0 && i<10)
        {
            if(v[i]<min_10_primeros)
            {
                min_10_primeros = v[i];
                pos1 = i;
            }
        }
        else if(i>=10 && i<20)
        {
            if(v[i]>max_10_ultimos)
            {
                max_10_ultimos = v[i];
                pos2 = i;
            }
        }
    }
    aux = v[pos1];
    v[pos1] = v[pos2];
    v[pos2] = aux;
}
