#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float total, ComTroco=0;
    int SemTroco=0;
    printf("Digite o valor total da comanda do restaurante: ");
    scanf("%f",&total);
    SemTroco= total/3;
    ComTroco=fmod(total, 3) + SemTroco;
    printf("Carlos e André vão pagar R$%d, e Felipe R$%f \n", SemTroco, ComTroco);
    return 0;

}