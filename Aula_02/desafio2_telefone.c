#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float numero;
    int num;
    printf ("Digite um número de telefone: ");
    scanf("%f", &numero);
    num= numero/100000000;
    printf("O ddd do telefone é: %d \n ", num);
    return 0;
}