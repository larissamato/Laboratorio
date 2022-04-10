#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int pequena,media,grande,total =0;
    printf("\t\t\tBEM VINDO!!!");
    printf("\nDigite a quantidade de camisetas pequenas vendidas: ");
    scanf("%d", &pequena);
    printf("Digite a quantidade de camisetas médias vendidas: ");
    scanf("%d", &media);
    printf("Digite a quantidade de camisetas grandes vendidas: ");
    scanf("%d", &grande);
    pequena = pequena *10;
    media = media *12;
    grande = grande * 15;
    total= pequena+media+grande;
    printf("o total arrecadado é: %d \n", total);
    return 0;
}
