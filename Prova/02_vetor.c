#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int vetor[5];
    int x,i;
    printf("digite 5 números\n");

    for(i=0;i<5;i++){
        scanf("%d", &vetor[i]);
    }
    i=0;
    x=vetor[0];
    while(i<5){
        if(vetor[i]>x){
            x=vetor[i];
        }
        i++;
    }
    for(i=0;i<5;i++){
        printf("%d  ", vetor[i]);
    }
    printf("\nO maior número é: %d\n", x);

    return 0;
}