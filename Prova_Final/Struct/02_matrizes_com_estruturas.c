#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

struct minha_estrtutura{
    int inteiro;
    double flutuante;
}exemplo1, exemplo2;


exemplo1.inteiro=100;
exemplo2=exemplo1;


printf("%d \n", exemplo2.inteiro);

return 0;

}

//ATRIBUIÇÃO
/*
struct minha_estrtutura{
    int inteiro;
    double flutuante;
}exemplo1, exemplo2;


exemplo1.inteiro=100;
exemplo2=exemplo1;


printf("%d \n", exemplo2.inteiro);

return 0;
*/