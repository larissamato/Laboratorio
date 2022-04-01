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

    if (base>=0 && altura>=0)
    {
    printf("O valor da área desse retângulo é: %d \n", Calculo(base,altura));
    }
    else {
        printf("Digite um valor positivo! \n");
    }
    return 0;
}