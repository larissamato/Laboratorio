#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estrutura
{
    int a,b;

    char c;
};


void imprimir(struct estrutura parametro){
    printf("%d\n", parametro.a);
}


int main (){

struct estrutura argumento;

argumento.a=1200;

imprimir(argumento);

return 0;
}