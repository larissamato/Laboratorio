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
    printf("\n\t---------------BATALHA NAVAL------------\n\nplacar:%d\n\n\n",placar);
    for (x=-1;x<11;x++){
        for (y=0;y<22;y++){
            printf("%c", matriz[x][y]);
        }
        printf("\n\t\t");
    }
    printf("\n");
}

void sorteio(){
int naviox[5];
int navioy[5];
int count = 1,x=0,y=0;

    for (int i=0; i<5; i++){
        naviox[i]= rand() % 9;
        naviox[i]=naviox[i];
    }

    for (int i=0; i<5; i++){
        navioy[i]= rand() % 9;
        navioy[i]=navioy[i];
    }

    

    /*for (int i=0; i<9; i++){
        printf("x:%d\n", naviox[i]);
        printf("y:%d\n", navioy[i]);
    }*/
    for(placar=1;placar>=0;placar--){
        //printf("\nnaviox:%d\nnavioy:%d\n",naviox[0],navioy[0]);
        printf("\nDigite o valor de x e y do tabuleiro: ");
        scanf("%d %d", &x, &y);
        for (int i=0; i<10; i++){
                if (x == naviox[i] && y == navioy[i]){
                printf("naviox: %d navioy: %d\nescolha: x->%d y->%d\n", naviox[i],navioy[i], x, y);
                x=x+1;
                y=y*2+2;
                matriz[x][y]='x';
                }
                
        }
        print_matriz();
    }
}

int main ()

{

   gerar();
   print_matriz();
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