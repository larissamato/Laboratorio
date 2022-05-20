#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main (){
    float altura [50];
    char sexo [50];
    int count=0,masculino=0, feminino=0;
    float menor=0, controle=0.0;
    printf("Digite a altura em metros da pessoa desejada e se ela se identifica como do sexo feminino ou masculino.\n|f| -> feminino \n|m| -> masculino\n");
    scanf("%f %c", &altura[count], &sexo[count]);
    menor=altura[0];
    if(sexo[count] == 'f'){
            controle=altura[count]+controle;
            feminino= feminino+1;
        }
    for(count=1; count<=4; count++){
        printf("Digite a altura em metros da pessoa desejada e se ela se identifica como do sexo feminino ou masculino.\n|f| -> feminino \n|m| -> masculino\n");
        scanf("%f %c", &altura[count], &sexo[count]);
        if(altura[count] < menor){
            menor=altura[count];
        }
        if(sexo[count] == 'f'){
            controle=altura[count]+controle;
            feminino= feminino+1;
        }
        if(sexo[count]=='m'){
            masculino=masculino+1;

        }
    }
    printf("A menor altura é: %f\n", menor);
    controle= controle/feminino;
    printf("A média de altura das Mulheres é: %f\n", controle);
    printf("O total de homens é: %d\n", masculino);
    return 0;
}