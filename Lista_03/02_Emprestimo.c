#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

float salario, emprestimo=0;
printf("Digite o valor do seu salário bruto: ");
scanf("%f", &salario);
printf("Agora digite o valor do empréstimo: ");
scanf("%f", &emprestimo);
salario=salario*0.30;
if(emprestimo<=salario){
    printf("Seu empréstimo foi aprovado! \n");
}else
printf("Sinto muito, mas seu empréstimo não foi aprovado. O valor desejado ultrapassa trinta por cento do seu salário \n");
return 0;

}