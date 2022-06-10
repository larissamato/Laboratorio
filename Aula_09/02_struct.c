#include <stdio.h>

typedef struct
{
    float Peso;
    int Idade;
    float Altura;
}Pessoa;

void ImprimePessoa(Pessoa P){
    printf("Idade: %d Peso: %f, Altura: %f", P.Idade, P.Peso, P.Altura );
}

int main (){
    Pessoa Joao, P2;
    Pessoa Povo[10];

    Joao.Idade=15;
    Joao.Peso=60.5;
    Joao.Altura=1.75;

    Povo[4].Idade=23;
    Povo[4].Peso=75.3;
    Povo[4].Altura=1.89;
   P2=Povo[4];
   P2.Idade++;


   scanf("%d", &Povo[4].Idade);

   ImprimePessoa(Joao);
   return 0; 
}