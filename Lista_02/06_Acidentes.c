#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
    int controle,anos,meses,dias=0;
    printf("Digite a quantidade de dias sem acidentes na empresa: ");
    scanf("%d", &controle);
    anos=controle/360;
    meses=(controle%360)/30;
    dias=(controle%360)%30;
    printf("Tempo total sem acidentes: %d anos, %d meses, %d dias \n", anos, meses, dias);
    return 0 ;

}