#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main ()
{   
    //VELOCIDADE MAIOR
    char matriz[20], *point;
    printf("Entre com uma frase em letra maiuscula\n");
    scanf("%s", matriz);
    getchar();
    printf("Frase minúscula:");

    point = matriz;

    while(*point) printf("%c", tolower(*point++));


return 0;
}

//PONTEIRO SIMPLES
/*
    char matriz [10];
    char *point;
    point=&matriz[1];
    point=point+2;
    printf("%c\n", *point);
*/

//MINÚSCULA MATRIZ
/*
    char matriz [10];
    //EXEMPLO MATRIZ
    printf("Entre com uma frase em letra maiuscula\n");
    scanf("%s", matriz);
    getchar();
    printf("Frase minúscula:");
    for(int i=0;matriz[i];i++) printf("%c", tolower(matriz[i]));
*/