#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int operacao=0;
    float number1,number2=0;
    printf("\t\t\t\t\t CALCULADORA ");
    printf("\nEscolha uma operação matemática: \n[1] ---> multiplicação \n[2] ---> divisão \n[3] ---> soma \n[4] ---> subtração \n");
    scanf("%d", &operacao);
    printf("Digite o primeiro valor da operação: ");
    scanf("%f", &number1);
    printf("Digite o segundo valor da operação: ");
    scanf("%f", &number2);
    if (operacao==1){
            number1=number1*number2;
            printf("Resultado: %f\n", number1);
    }else 
        if (operacao==2){
            number1=number1/number2;
            printf("Resultado: %f\n", number1);
    }else 
        if(operacao==3){
            number1=number1+number2;
            printf("Resultado: %f\n", number1);
    }else 
        if (operacao==4){
            number1=number1-number2;
            printf("Resultado: %f\n", number1);
    }else {
            printf("Entrada inválida!!!\n");}
    return 0;
}