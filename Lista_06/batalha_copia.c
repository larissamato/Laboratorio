#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

char matriz[10][10];
char matriz_jogador[10][10];
int placar=25, pontos=0;

void tela_inicial(){
    system("clear");
    printf("\n\t---------------BATALHA NAVAL------------\n\n");printf("____________________PPP \n_____________________P \n_____________________PPPPPPPPPPPPP \n_____________________PPP___P__P_PPPP\n_____________________PPP___PPPP___PP\n_____________________PPP__PPPPP___PP\n_____________________PPP__PPPPP___P\n_____________________PPPPPP__PP___P\n_____________________P_________PPPP\n_____________PPPPPPPPPPPPP\n_____________PP___________PP\n______________P____________P\n______________P_____________P\n_______________P____________P\n_______________P____________P_PP\n_______________P__PPPPPPPPPPPPPPP\n_____PPPPPPPPPPPPPP______________P\n_____P____________PP_____________PP____P\n_____PP____________P_____PPPPPPPPPPPPPPPP\n______P______PPPPPPPPPPPPPP______________P\n______PP_____PP___________P______________PP\n_______P______P____________P______________P\n_______P______PP___________P_____________PP\n_______P_______P___________P_____________PP\n______PP_______P___________PP____________P\n______PPPPPPPPPPP__________PP___________PP\n___________P_P_PP________PPP_____PPPPPPPP_____PPP\n___________P_P_PPPPPPPPPPP_PPPPPPP_______PPPPP__PP\nPPPPPP_____P_P______PP_P_______P_PPPPPPPPP___PPPPP\nPP___PPPPPPPPP______PP_P____PPPPPPP________PP\n__PP________PPPPPPPPPPPPPPPPPP____PP______P\n____P____________________________PP_P____P\n_____P_____PPP_____PP_____PPP_____PPP___PP\n______P___PP_PP___PP_P____P_PP__________P\n______PP____PP_____PPP_____PP__________PP\n_______PP_____________________________PP\n________PP___________________________PP\n_________PP________________________PPP\n___________PPPPPPPPPPPPPPPPPPPPPPPPP\n");
}
void contagem(){
    printf("TIROS RESTANTES: %d\t\t ACERTOS:%d\n\n", placar, pontos);
    if(pontos==170){
        placar=0;
        system("clear");
        printf("VOCÊ ACERTOU TODOS OS NAVIOS!\n\n");
    }else if (placar==0){
        system("clear");
        printf("VOCÊ PERDEU! TENTE NOVAMENTE!\n\n");
    }
}

void print_matriz(){
    system("clear");
    printf("\n\t---------------BATALHA NAVAL------------\n\n");
     contagem();
     for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf(" %c", matriz_jogador[i][j]);
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
        uni=navio1Posicoes[i]-dez*10;
        matriz[dez][uni]='W';
    }
    
    //1 NAVIO 2 POSIÇÕES 
    navio2Posicoes[0]= rand() % 9;
    for(int i=0; i<2; i++){
        navio2Posicoes[i]=navio2Posicoes[0]+i;
        dez=navio2Posicoes[i]/10;
        uni=navio2Posicoes[i]-dez*10;
        matriz[dez][uni]='W';
    }

    //1 NAVIO QUATRO POSIÇÕES
    navio4Posicoes[0]= rand() % 100;
    for(int i=0; i<4; i++){
        navio4Posicoes[i]=navio4Posicoes[0]+i;
        dez=navio4Posicoes[i]/10;
        uni=navio4Posicoes[i]-dez*10;
        matriz[dez][uni]='W';
    }

    //2 NAVIOS TRÊS POSIÇÕES
    navio3Posicoes[0][0]= rand() % 100;
    navio3Posicoes[1][0]= rand() % 100;
    for(int i=0; i<2; i++){
        for(int j=0;j<3;j++){
            navio3Posicoes[i][j]=navio3Posicoes[i][0]+j;
            dez=navio3Posicoes[i][j]/10;
            uni=navio3Posicoes[i][j]-dez*10;
            matriz[dez][uni]='W';
        }
    }
}

void jogador(){
    int number=0, dez=0,uni=0;

    for(int i = 0; i<10;i++){
        for(int j=0; j<10; j++){
            matriz_jogador[i][j]='_';
            
        }
    }
    for(placar=25;placar>=0;placar--){
    printf("\nDigite um valor de 0 a 99:");
    scanf("%d",&number);

        for (int i=0; i<10; i++){
            for (int j=0; j<10; j++)
                dez=number/10;
                uni=number-dez*10;
                if (matriz[dez][uni]=='W'){
                matriz_jogador[dez][uni]='x';
                pontos=pontos+1;
                }else{
                    matriz_jogador[dez][uni]='o';
                }
                
        }
        print_matriz();
    }
}

int main ()

{  
    tela_inicial();
    sorteio();
    jogador();
        
    return(0);
}