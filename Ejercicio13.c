#include <stdio.h>

void main()
{
    int i, j, suma = 0;
    int array[4][5] = { {4, 7, -5, 4,  9},
                        {0, 3, -2, 6, -2},
                        {1, 2,  4, 1,  1},
                        {6, 1,  0, 3, -4} };

    puts("\t\t/*Busca la suma de los numeros \
que no pertenecen a la diagonal principal*/");

    printf("Matriz: \n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
            printf("%3d ", array[i][j]);
            //%3d -> imprime dejando 3 huecos a su izquierda
        puts("");
    }

    puts("");

    for(i=0; i<4; i++)
        for(j=0; j<5; j++)
            if(i != j)
                suma += array[i][j];

    printf("La suma es %d\n", suma);
}
