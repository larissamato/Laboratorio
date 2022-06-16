#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int x=0,y=0,v=0,count=0,pos=0,verx=0,vero=0,verv=0;
int linha=0,coluna=0;
char matriz[10][10];
int placar=2;

 void print_matriz(){
    system("clear");
    printf("\n\t---------------BATALHA NAVAL------------\n\ntentativas:%d\n\n\n",placar);
     for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf(" %c", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void sorteio(){
    int navio1Posicoes[5];
    int navio2Posicoes[2];
    int navio4Posicoes[4];
    int navio3Posicoes[2][3];
    int dez, uni;

    for(int i = 0; i<10;i++){
        for(int j=0; j<10; j++){
            matriz[i][j]='_';
            
        }
    }
 
   // 5 NAVIOs 1 POSIÇÕES 
    for(int i=0; i<5; i++){
        navio1Posicoes[i]= rand() % 99;
        dez=navio1Posicoes[i]/10;
        printf("%d dez:\n", dez);
        uni=navio1Posicoes[i]-dez*10;
        printf("%d uni:\n", uni);
        matriz[dez][uni]='W';
    }
    
    //1 NAVIO 2 POSIÇÕES 
    navio2Posicoes[0]= rand() % 9;
    for(int i=0; i<2; i++){
        navio2Posicoes[i]=navio2Posicoes[0]+i;
        dez=navio2Posicoes[i]/10;
        printf("%d dez:\n", dez);
        uni=navio2Posicoes[i]-dez*10;
        printf("%d uni:\n", uni);
        matriz[dez][uni]='W';
    }

    //1 NAVIO QUATRO POSIÇÕES
    navio4Posicoes[0]= rand() % 100;
    for(int i=0; i<4; i++){
        navio4Posicoes[i]=navio4Posicoes[0]+i;
        dez=navio4Posicoes[i]/10;
        printf("%d dez:\n", dez);
        uni=navio4Posicoes[i]-dez*10;
        printf("%d uni:\n", uni);
        matriz[dez][uni]='W';
    }

    //2 NAVIOS TRÊS POSIÇÕES
    navio3Posicoes[0][0]= rand() % 100;
    navio3Posicoes[1][0]= rand() % 100;
    for(int i=0; i<2; i++){
        for(int j=0;j<3;j++){
            navio3Posicoes[i][j]=navio3Posicoes[i][0]+j;
            dez=navio3Posicoes[i][j]/10;
            printf("%d dez:\n", dez);
            uni=navio3Posicoes[i][j]-dez*10;
            printf("%d uni:\n", uni);
            matriz[dez][uni]='W';
        }
    }
}

int main ()

{
   sorteio();
   print_matriz();
    return(0);
}