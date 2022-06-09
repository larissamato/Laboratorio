#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int x=0,y=0,v=0,count=0,pos=0,verx=0,vero=0,verv=0;
int linha=0,coluna=0;
char matriz[10][22];

void gerar(){
    //matriz[0][2]='0';
    matriz[0][4]='1';
    matriz[0][6]='2';
    matriz[0][8]='3';
    matriz[0][10]='4';
    matriz[0][12]='5';
    matriz[0][14]='6';
    matriz[0][16]='7';
    matriz[0][18]='8';
    matriz[0][20]='9';
    for(int i=0; i<1;i++){
        for(int j=0;j<22;j++){
             if(j%2!=0){
            matriz[i][j]=' ';
        }
        }
    }
    for(int i=1;i<10;i++){
        for(int j=0;j<22;j++)
        if(j%2!=0){
            matriz[i][j]='|';
        }
        else if (j%2==0){
            matriz[i][j]=' ';
        }
    }
  
}

void print_matriz(){
    system("clear"); //limpa tela windows
    //system("clear"); linux e mac
    for (x=0;x<10;x++){
        for (y=0;y<21;y++){
            printf("%c", matriz[x][y]);
        }
        printf("\n");
    }
}

int main ()

{
   gerar();
   print_matriz();

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











/*
int linha=0,coluna=0;
char matriz[10][10];
int main (){
int navio[9];
int count = 1;

for (int i=0; i<9; i++){
    navio[i]= rand() % 100;
}
for (int i=0; i<9; i++){
    printf("\t%d ", navio[i]);
}
for (int i=0; i<10; i++){
    for (int j=0; j<10; j++){
        count ++;
        if (count == navio[1]){
            
        }
    }
}
return 0;
}*/