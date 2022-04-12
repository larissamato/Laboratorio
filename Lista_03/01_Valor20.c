#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int number1, number2,soma=0;
    printf ("Digite o primeiro número: ");
    scanf("%d", &number1);
    printf ("Digite o segundo número: ");
    scanf("%d", &number2);
    soma=number1+number2;
    if(soma>20){
        soma=soma+8;
    }else soma=soma-5;
    printf("Resultado: %d \n", soma);
    return 0;

}

//gcc 01_Comissao.c -o a.out -lm
//./a.out