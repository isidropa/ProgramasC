#include <stdio.h>
int longitud(char c[]);
int cuenta_y_sustitucion(char c[]);

void main()
{
    char condicion;
    char cadena[50]={'\0'};
    puts("\t\t/*Programa encargado de tratar con cadenas de caracteres*/");
    puts("Cuenta los caracteres, cuenta las palabras de 4 letras \
y sustituye las palabras de 4 letras por 4 asteriscos");
    do
    {
        printf("\nProporcioname un cadena de texto (max 50 caracteres): ");
        gets(cadena);

        printf("Caracteres: %d\n", longitud(cadena));
        printf("Palabras de 4 letras: %d\n", cuenta_y_sustitucion(cadena));
        printf("Sustitucion: %s\n\n", cadena);

        do
        {
            printf("Otra? Si[s] No[n]: ");
            scanf("%c", &condicion);
            fflush(stdin); //limpia los datos residuales de entrada
        }while(condicion!='s' && condicion!='n');

    }while(condicion != 'n');
}

int longitud(char c[])
{
    int i;
    for(i=0; c[i]!='\0'; i++);
    return i;
}

int cuenta_y_sustitucion(char c[])
{
    int cont4=0, n=0;
    for(int i=0; c[i] != '\0'; i++)
    {
        if(c[i] != ' ')
        {
            if(isalpha(c[i])) cont4++;
            else cont4=0;
        }
        else cont4=0;

        if(cont4 == 4 && (c[i+1] == ' ' || c[i+1] == '\0'))
        {
            //n = cuenta palabra de 4 letras
            n++;
            //sustituye palabras de 4 letras por (****)
            for(int j=0; j<4; j++) c[i+j-3]='*';
        }
    }
    return n;
}
