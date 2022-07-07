#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
int i,j;
int matriz[2][2];

for (i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
        scanf("%d", &matriz[i][j]);
        getchar();
    }
}

for (i=0;i<2;i++)
{
    for (j=0;j<2;j++)
    {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
return 0;    
}
