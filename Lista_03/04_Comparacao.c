//Lista 3.4 - Comparação
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Compara(int number1,int number2,int op){

    if (op==1){
        if(number1>number2){
            printf("O valor de %d é maior que o valor de %d\n", number1,number2);
        }else{
            printf("A operação relacional é falsa.\n");}


    }else if (op==2){
        if(number1<number2){
            printf("O valor de %d é menor que o valor de %d\n", number1,number2);
        }else{
            printf("A operação relacional é falsa.\n");}


    }else if(op==3){
        if(number1==number2){
            printf("O valor de %d é igual ao valor de %d\n", number1,number2);
        }else{
            printf("A operação relacional é falsa.\n");}


    }else if(op==4){
        if(number1!=number2){
            printf("O valor de %d é diferente ao valor de %d\n", number1,number2);
        }else{
            printf("A operação relacional é falsa.\n");}

    }else {printf("Entradas inválidas!!!\n");}
return 0;
}

int main (void){
    int operacao, number1,number2=0;
    printf("\t\t\t\t\t CALCULADORA ");
    printf("\nEscolha uma operação matemática: \n[1] ---> maior que (>) \n[2] ---> menor que (<) \n[3] ---> igual (=) \n[4] ---> diferente (!) \n");
    scanf("%d", &operacao);
    printf("Digite o primeiro valor da operação: ");
    scanf("%d", &number1);
    printf("Digite o segundo valor da operação: ");
    scanf("%d", &number2);
    printf("%d", Compara(number1,number2,operacao));
    return 0;
}
