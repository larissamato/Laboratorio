#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int base, altura=0;
    printf("Digite o valor da base do retângulo: ");
    scanf("%d", &base);
    printf("Digite o valor da altura do retângulo: ");
    scanf("%d", &altura);
    base= base*altura;
    printf("O valor da área desse retângulo é: %d \n", base);
    return 0;

}
