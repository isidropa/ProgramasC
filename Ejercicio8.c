#include <stdio.h>

int main()
{
    int N = 1; //Pareja de conejos inicial
    int M = 0, meses;
    float iteracion, meses_exactos;

    puts("        /*Problema de Fibonacci sobre cria de conejos*/");
    puts("Cada pareja de conejos tiene dos crias al mes. Cada cria \
es fertil al mes.\nCuantos meses se necesitan para tener M conejos si \
ninguno muere?\n");

    printf("Dame el numero de conejos -> ");
    scanf("%d", &M);
    for(meses = 0; N < M; meses++)
        N = 2 * N;
    if(M < N)
    {
        iteracion = (float)(N-M) / (N-(N/2));  //ecuacion iteracion
        meses_exactos = (1 - iteracion) + (meses - 1);
    }
    else
        meses_exactos = meses;
    printf("Dentro de aproximadamente %f mes(es) habra %d conejo(s)\n",
           meses_exactos, M);
}
