//Lista 3.7 - Jogo par e ímpar
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

bool ePar (int x){
    bool retorno = false;
    if(x %2 ==0)
    retorno = true;
    return retorno;
}

int main (){

    int maoComputador, maoJogador, jogadorEscolhe = 0;
    bool par = true;

    srand(time(0));  //time:relógio no computador, nesse caso instantâneo. O aleatório no computador não existe e por isso é preciso declarar o time no srand.

    maoComputador = rand() % 10; // Pega os números de 0 a 10

    printf ("\t\t JOGO PAR OU ÍMPAR \n");
    printf("Escolha um número:");
    scanf("%d", &maoJogador);
    printf("\n O computador escolheu o número!");
    printf("Jogador escolha: \n [1] --> Par \n [2] --> Ímpar \n");   
    scanf("%d", &jogadorEscolhe);
    if(jogadorEscolhe ==1){
        par=true;
    }
    else{
        par= false;
    }
printf("\n\nMão Computador %d, Mão Jogador %d, Total = %d", maoComputador,maoJogador,maoComputador+maoJogador);
if ((ePar(maoComputador+maoJogador)&& par)|| (!ePar(maoComputador+maoJogador) &&!par)){
    printf("\nJOGADOR GANHOU!\n");
}
else{
    printf("\nJOGADOR PERDEU! \n");
}
return 0;
}