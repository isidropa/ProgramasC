#include <stdio.h>

int main()
{
    puts("      /*Muestra el alfabeto en mayusculas y minusculas*/");

    char alfabeto = 'A';    //'\x41'
    while(alfabeto != 'Z')
        printf("%c ", alfabeto++);

    puts("");       //cambia a una nueva linea
    alfabeto = '\x61';      //'a'
    while(alfabeto != 'z')
        printf("%c ", alfabeto++);
    puts("\n");

    puts("      %Triangulo 'alfabetico' en mayusculas%");

    char ini;
    for(alfabeto = 'A'; alfabeto <= 'Z'; alfabeto++)
    {
        for(ini = 'A'; ini <= alfabeto; ini++)
            printf("%c", ini);
        puts("");
    }
    for(alfabeto = 'Z' - 1; alfabeto >= 'A'; alfabeto--)
    {
        for(ini = 'A'; ini <= alfabeto; ini++)
            printf("%c", ini);
        puts("");
    }
}
