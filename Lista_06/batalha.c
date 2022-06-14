#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int x=0,y=0,v=0,count=0,pos=0,verx=0,vero=0,verv=0;
int linha=0,coluna=0;
char matriz[11][22];

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
  
}

void print_matriz(){
    system("clear");
    for (x=0;x<11;x++){
        for (y=0;y<22;y++){
            printf("%c", matriz[x][y]);
        }
        printf("\n");
    }
}

void sorteio(){
int naviox[9];
int navioy[9];
int count = 1,x=0,y=0;

for (int i=0; i<9; i++){
    naviox[i]= rand() % 9;
}

for (int i=0; i<9; i++){
    navioy[i]= rand() % 9;
}

for (int i=0; i<9; i++){
    printf("\t%d ", navio[i]);
}
printf("\nDigite o valor de x e y do tabuleiro: ");
scanf("%d %d", &x, &y);

for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
        if (x == naviox[i] && y == navioy[j]){
        matriz[i][j]='o';
        gerar();
        }
    }
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