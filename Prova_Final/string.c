#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char *argv[])
{
    char nome[51], sobrenome[51];
    int comp1,comp2;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    getchar();
    comp1= strlen(nome);

    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    getchar();
    comp2= strlen(sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("Ola %s!\n", nome);
    printf("Seu nome tem %d caracteres e seu sobrenome tem %d caracteres\n", comp1, comp2);

    strcpy(nome,"outronome");
return 0;

}

/*
strcmp compara duas cadeias de caracteres
strcmpi compara duas cadeias de caracteres sem levar em consideração letras maiúsculas e minúsculas 
strlen calcula o comprimento da cadeia sem contar o /0
strlwr converte para minúsculas
strupr converte para maiúsculas
strcpy copia cadeia origem para destino */
