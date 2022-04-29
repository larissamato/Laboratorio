#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char Ch;
    Ch='\0';

    while(Ch!='q'){
        printf("digite q para sair!");
        scanf("%c",&Ch);
        getchar();
    }
    return (0);
}