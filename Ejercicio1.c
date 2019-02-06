/*Programa que obtiene e imprime un nombre y una direccion*/

#include <stdio.h>

void main()
{
    char nombre[10];
    char direccion[20];

    printf("Dame el nombre: ");
    gets(nombre);
    printf("Dame la direccion: ");
    gets(direccion);

    printf("\nNombre: %s\nDireccion: %s", nombre, direccion);
}
