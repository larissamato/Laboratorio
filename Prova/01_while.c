#include <stdio.h>
#include <string.h>

int main(){
    int resp=0;

    do
    {
        printf("Digite 1 para continuar e 2 para sair\n");
        scanf("%d", &resp);

    }while(resp==1);
    
    return 0;
}