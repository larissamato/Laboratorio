#include <stdio.h>

int main (){

    //[linha][coluna]
    int mtrx [20][10];
    int i,j,count;

    count=1;

    //alocação de valores na matriz
    for (i=0;i<20;i++)
        for (j=0;j<10;j++)
        {
            mtrx[i][j]=count;
            count++;
        }

    //exibição dos valores da matriz
    for (i=0;i<20;i++){
        for (j=0;j<10;j++)
        {
            printf("\t%d ",mtrx[i][j]);
        }
        printf("\n");
    }
    return(0);
}
