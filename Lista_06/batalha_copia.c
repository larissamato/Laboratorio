#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int x=0,y=0,v=0,count=0,pos=0,verx=0,vero=0,verv=0;
int linha=0,coluna=0;
char matriz[11][22];
int placar=2;

void gerar(){
    int count=0;
    for(int i=0; i<1;i++){
        for(int j=0;j<22;j++){
            if(j==0){
            matriz[i][j]=' ';    
            }
            else if(j%2!=0){
            matriz[i][j]=' ';
            }
            else if(j%2==0){
            matriz[i][j]=count+'0';
            count++;
            }

        }
    }
    
    for(int i=0; i<1;i++){
        for(int j=0;j<22;j++){
            if(j%2!=0){
            matriz[i][j]=' ';
            }
        }
    }
    for(int i=1;i<11;i++){
        for(int j=0;j<22;j++)
        if(j%2!=0){
            matriz[i][j]='|';
        }
        else if (j%2==0){
            matriz[i][j]=' ';
        }
    }
    count=0;
    for(int i=1; i<11;i++){
        for(int j=0;j==0;j++){
            matriz[i][j]=count+'0';
            count++;
        }
    }
    //matriz[1][2]='o';
  
}

void print_matriz(){
    system("clear");
    printf("\n\t---------------BATALHA NAVAL------------\n\ntentativas:%d\n\n\n",placar);
    for (x=-1;x<11;x++){
        for (y=0;y<22;y++){
            printf("%c", matriz[x][y]);
        }
        printf("\n\t\t");
    }
    printf("\n");
}

void sorteio(){
    int navio1Posicoes[5];
    int navio2Posicoes[2];
    int navio4Posicoes[4];
    int navio3Posicoes[2][3];
    int count = 1,x=0,y=0;
    x= rand() % 9;
    y= rand() % 9;

    char matriz[10][10];
    for(int i = 0; i<10;i++){
        for(int j=0; j<0; j++){
            if(x==i && j==y){
            matriz[i][j]='W';
            }
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("\t%d", matriz[i][j]);
        }
        printf("\n");
    }


/*
    //5 NAVIO 1 POSIÇÕES 
    navio1Posicoes[0]= rand() % 9;
    for(int i=0; i<5; i++){
        navio1Posicoes[i]=navio1Posicoes[0]+i;
    }
    for(int i=0; i<2; i++){
        printf("\t%d", navio2Posicoes[i]);
    }
    printf("\n\n\n");
    //1 NAVIO 2 POSIÇÕES 
    navio2Posicoes[0]= rand() % 9;
    for(int i=1; i<2; i++){
        navio2Posicoes[i]=navio2Posicoes[0]+i;
    }
    for(int i=0; i<2; i++){
        printf("\t%d", navio2Posicoes[i]);
    }
    printf("\n\n\n");

    //1 NAVIO QUATRO POSIÇÕES
    navio4Posicoes[0]= rand() % 9;
    for(int i=0; i<4; i++){
        navio4Posicoes[i]=navio4Posicoes[0]+i;
    }
    for(int i=0; i<4; i++){
        printf("\t%d", navio4Posicoes[i]);
    }
    printf("\n\n\n");

    //2 NAVIOS TRÊS POSIÇÕES
    navio3Posicoes[0][0]= rand() % 9;
    navio3Posicoes[1][0]= rand() % 9;
    for(int i=0; i<2; i++){
        for(int j=1;j<3;j++){
            navio3Posicoes[i][j]=navio3Posicoes[i][0]+j;
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("\t%d", navio3Posicoes[i][j]);
        }
        printf("\n");
    }
    printf("\n");

*/

    

    /*for (int i=0; i<9; i++){
        for (int j=0; j<9; j++){
            printf(" %d", navio[i][j]);
        }
        printf("\n");
    }   */
    
    /*for(placar=1;placar>=0;placar--){
        //printf("\nnaviox:%d\nnavioy:%d\n",naviox[0],navioy[0]);
        printf("\nDigite o valor de x e y do tabuleiro: ");
        scanf("%d %d", &x, &y);

        for (int i=0; i<10; i++){
                for (int i=0; i<10; i++){
                if (x == naviox[i] && y == navioy[i]){
                printf("naviox: %d navioy: %d\nescolha: x->%d y->%d\n", naviox[i],navioy[i], x, y);
                x=x+1;
                y=y*2+2;
                matriz[x][y]='x';
                }
            }  
        }
        print_matriz();
    }*/
}

int main ()

{

   //gerar();
   //print_matriz();
   sorteio();

    /*char strings [5][100];
    int count;

    for (count=0;count<5;count++)
    {
        printf ("\n\nDigite uma string: ");
        gets (strings[count]);
        //Alexandre Bellezi jose
        //char = 32
        //if(strings[0][9] == 67);
    }

    printf ("\n\n\nAs strings que voce digitou foram:\n\n");

    for (count=0;count<5;count++)
        printf ("%s\n",strings[count]);*/

    return(0);
}