#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Calculo (int base, int altura){
int calculo =0;
calculo= base*altura;
return calculo;
}

int main(void)
{
    int base, altura=0;
    printf("Digite o valor da base do retângulo: ");
    scanf("%d", &base);
    printf("Digite o valor da altura do retângulo: ");
    scanf("%d", &altura);
    printf("O valor da área desse retângulo é: %d \n", Calculo(base,altura));
    return 0;
}