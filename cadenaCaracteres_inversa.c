#include <stdio.h>

void imprimir_inversa(char*);

int main()
{
    char cadena[50];

    puts("\t\t/*Inversion de una cadena de caracteres*/");
    printf("Introduce la cadena de caracteres -> ");
    gets(cadena);   //coge varias palabras

    imprimir_inversa(&cadena);      //variable referenciada
}

void imprimir_inversa(char *cadena) //variable referenciada
{
    char cad_inv[50];
    int tam, m, num_cad2 = 0;

    //Calculo tamaño de la cadena
    for(tam=0; cadena[tam] != '\0'; tam++);
    //Copia inversa en otra cadena
    for(m=tam-1; m>=0; m--)
    {
        cad_inv[num_cad2] = cadena[m];
        num_cad2++;
    }
    cad_inv[num_cad2] = '\0';   // \0 -> fin de cadena

    printf("La cadena inversa es [%s]\n", cad_inv);
}

