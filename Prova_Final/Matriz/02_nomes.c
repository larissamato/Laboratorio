#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
int i,j;
char nomes[2][2];

for (i=0;i<2;i++)
{
    printf("Entre com a linha %d", i);
    scanf("%s", nomes[i]);
}

for (i=0;i<2;i++)
{
        printf("O nome %d eh : ",i);
        printf("%s \n", nomes[i]);

}
return 0;    
}