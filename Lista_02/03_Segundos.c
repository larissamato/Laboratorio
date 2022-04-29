//Lista 2.3 - conversão de tempo
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int segundos,horas,minutos=0;
    printf("Olá, digite a duração do evento em segundo: ");
    scanf("%d", &segundos);
    horas=segundos/3600;
    minutos=(segundos%3600)/60;
    segundos=(segundos%3600)%60;
    printf("o evento durou %d horas, %d minutos, %d segundos \n",horas,minutos,segundos);
    return 0;
}