//Lista 2.2 - centena, unidade e dezena
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int number, centena, dezena, unidade = 0;

    printf("Digite um número de até três dígitos: ");
    scanf("%d", &number);
    centena= number/100;
    dezena= (number - centena*100)/10;
    unidade= (number - centena*100 - dezena*10);
    printf("Centena: %d \n ", centena);
    printf("Dezena: %d \n ", dezena);
    printf("Unidade: %d \n ", unidade);
    return 0;

}
