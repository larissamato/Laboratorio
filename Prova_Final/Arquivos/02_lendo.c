#include <stdio.h>
#include <stdlib.h>

void lerArquivo(int *vet);
int main()
{
    int vet[11];
    
    lerArquivo(vet);
    printf("O arquivo foi lido e criado com sucesso!");

}


void lerArquivo (int *vet)
{
    char i=0;
    
    FILE *arquivo;

    arquivo=fopen("teste.txt", "R");

    for(i=0;i<10;i++) fscanf(arquivo,"%d\n", &vet[i]);

    arquivo=fopen("Teste02.txt","w");

    for(i=0;i<10;i++) fprintf(arquivo,"%d\n", vet[i]+2);


    fclose(arquivo);



}