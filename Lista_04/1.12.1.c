#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int idade=1, count=0, controle=0;

    while(idade!=0){
    printf("Digite a idade:");
    scanf("%d", &idade);
    controle=idade+controle;
    count=count+1;
    }
    controle=controle/(count-1);
    printf("média %d", controle);
    return 0;
}
