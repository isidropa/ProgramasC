/*Ejercicio 1*/

#include <stdio.h>

void main()
{
    long numero;
    char letra;
    puts("\tPrograma que imprime un DNI por pantalla");

    printf("Proporcioname una letra: ");
    scanf("%c", &letra);
    printf("Proporcioname un numero de 8 digitos: ");
    scanf("%d", &numero);

    printf("\nDNI: %d-%c", numero, letra);
}
