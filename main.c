#include <stdio.h>

int main()
{
    float salario;

    printf("        /*Aumento de salario*/\n");
    printf("Cual es el salario?\n");
    scanf("%f", &salario);

    if(salario > 0 && salario <= 9000)
        printf("El salario aumenta un 20%: %.2f", salario * 1.20);
    else if(salario > 9000 && salario <= 15000)
        printf("El salario aumenta un 10%: %.2f", salario * 1.10);
    else if(salario > 15000 && salario <= 20000)
        printf("El salario aumenta un 5%: %.2f", salario * 1.05);
    else if(salario > 20000)
        printf("El salario no aumenta mas: %.2f", salario);
    else
        printf("El salario introducido no es correcto");
}
