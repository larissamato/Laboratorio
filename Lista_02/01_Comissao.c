#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um algoritmo que leia o nome de um vendedor, o seu salário fixo e o valor total de vendas efetuadas
por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre total de vendas
efetuadas no mês, o algoritmo deve informar salário total do vendedor e seu nome*/
int main (){

char nome[20];
float salario = 0;
float vendas =0;
//printf("Digite o seu primeiro nome:"); 
//scanf("%c", &nome );
printf("\nAgora digite o valor do seu salário: ");
scanf("%f", &salario );
printf("\nPor fim digite o total de vendas realizadas: ");
scanf("%f", &vendas );
salario= salario + (vendas*0.15);
printf("\nOlá, %c, seu salário total é: R$ %f \n", nome, salario);

return 0;

}

//gcc 01_Comissao.c -o a.out -lm
//./a.out