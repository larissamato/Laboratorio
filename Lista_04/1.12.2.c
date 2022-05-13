#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main (){
    float altura [50]= {1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.3,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5,1.6,1.5};
   char sexo [50]={'F','M','M','M','M','F','M','M','M','M','F','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M','M'};
    int count=0,i=0,masculino=0, feminino=0;
    float menor=altura[0],controle=0.0;

    while(count<=49){
        if(altura[count] < menor){
            menor=altura[count];
            i=i+1;
        }
        if(sexo[count] == 'F'){
            controle=altura[count]+controle;
            feminino= feminino+1;
        }
        if(sexo[count]=='M'){
            masculino=masculino+1;

        }
    count=count+1;
    }
    printf("A menor altura é: %f\n", menor);
    controle= controle/feminino;
    printf("A média de altura das Mulheres é: %f\n", controle);
    printf("O total de homens é: %d\n", masculino);
    return 0;
}