//Lista 2.8 - Conta lanchonete 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int quantidade=0;
    float queijo, presunto, hamburguer=0;
    printf("Digite a quantidade de sanduíches a fazer:  ");
    scanf("%d", &quantidade);
    queijo= ((quantidade * 100)/1000);
    presunto=(quantidade * 50)/1000;
    hamburguer= (quantidade*100)/1000;
    printf("Você precisará de %f quilos de carne, %f quilos de presunto e %f quilos de queijo.\n\n ", hamburguer,presunto,queijo);
    return 0;

}