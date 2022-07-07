#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main ()
{
    char str[50];
    char *point;
    int i;
    point="teste";
    printf("Entre com uma string\n");
    scanf("%s", str);
    getchar();
    
    //encontrar o primeiro espaço ou fim
    for(i=0;str[i] && str[i]!=' '; i++);

    point= &str[i];

    printf("%s", point);
    return 0;
}

// SIMPLES
/*
    char *point;
     point="teste";
     printf("%s\n", point);
*/