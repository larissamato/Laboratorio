//Lista 3.5 - Notas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int frequencia,nota=0;
    printf("Digite a frequência do aluno: ");
    scanf("%d",&frequencia);
    printf("Digite a nota do aluno: ");
    scanf("%d",&nota);

    if(frequencia>=75 && nota>=70){
        printf("Aluno aprovado!!!");
    }
    else if ((frequencia>=75 && nota>=30) && nota<=70){
        printf("Aluno em exame!!!");
    }
    else if (frequencia>=75 && nota<30){
        printf("Aluno reprovado!!!");
    }
    else if(frequencia<75){
        printf("Aluno reprovado por falta");
    }
    else printf("Entrada inválida!!!!");
    return 0;
}