//Lista 3.2 - Empréstimo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

float salario=0, emprestimo=0, parcela=0;
printf("Digite o valor do seu salário bruto: ");
scanf("%f", &salario);
printf("Agora digite o valor do empréstimo: ");
scanf("%f", &emprestimo);
printf("Por fim, digite em quantas parcelas será pago: ");
scanf("%f", &parcela);
emprestimo=emprestimo/parcela;
salario=salario*0.30;
if(emprestimo<=salario){
    printf("Seu empréstimo foi aprovado! \n");
}else
printf("Sinto muito, mas seu empréstimo não foi aprovado. O valor da parcela ultrapassa trinta por cento do seu salário \n");
return 0;

}