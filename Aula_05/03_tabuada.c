#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numeroTabuada=2;
    int i=0;
    int calculo=0;


    printf("Tabuada do 2 \n");
    while(i<=10){
    calculo=i*numeroTabuada;
    printf("%dx%d=%d\n",numeroTabuada,i,calculo);
    i=i+1;
    }
    return 0;
}