#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct Pessoa
{
char nome [50];
int idade;
}

void escrever_arquivo(tipo_pessoa pessoas[]){
    int i;
    int len_vet=2;

    FILE *arq;
    arq=fopen("dados.dat","ab");
    if(arq !=NULL)
    {
        for (i=0;i<len_vet; i++){
            fwrite(&pessoas[i], sizeof(tipo_pessoa),1,arq);
            fclose(arq);
        }
    }else{
        printf("\nErro ao abrir arquivo!\n");
        exit(1)
    }
}

int main (int argc, char *argv[])
{
    tipo_pessoa pessoas[]={{"Pedro",20},{"maria",30}};
    tipo_pessoa aux_pessoas[MAX];
    escrever_arquivo(pessoas);
}