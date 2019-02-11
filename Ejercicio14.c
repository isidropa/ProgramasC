#include <stdio.h>
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000
void comprobacion_conversion(char r[],int d[], int*);
int calculo(int d[], int);

void main()
{
    puts("\t\t/*Suma de caracteres romanos*/");

    int resultado = 0, TAM = 0;
    int array_decimal[51] = {0};
    //inicializa el array de enteros a '0'
    char array_romano[51] = {'\0'};
    //inicializa todo el array de caracteres al valor nulo '\0'

    puts("Introduce los caracteres romanos seguidos \
y en mayusculas (max 50 digitos)");
    scanf("%s", &array_romano);  //guarda una cadena

    comprobacion_conversion(array_romano, array_decimal, &TAM);
    resultado = calculo(array_decimal, TAM);

    if(TAM > 0)
        printf("\nEl Resultado es: %d", resultado);
    else
        printf("\nEl numero romano introducido es incorrecto");
}

void comprobacion_conversion(char r[], int d[], int* t)
{
    for(int i=0; r[i]!='\0'; i++)
    {   //conversion
        switch(r[i])
        {
            case 'I': d[i]=I; break;
            case 'V': d[i]=V; break;
            case 'X': d[i]=X; break;
            case 'L': d[i]=L; break;
            case 'C': d[i]=C; break;
            case 'D': d[i]=D; break;
            case 'M': d[i]=M; break;
            default:  *t = -1;  //numero incorrecto
        }
    //comprobacion
    if(*t == -1)
        r[i+1] = '\0'; //cancelacion del for
    else
        (*t)++;
    }
}

int calculo(int d[], int t)
{
    int total = 0;
    for(int i=0; i<t; i++)
    {
        total += d[i];
    }
    return total;
}
