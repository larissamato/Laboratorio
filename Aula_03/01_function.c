#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Antecessor (int var){
var= var-1;
return var;
}

int main(void)
{
    int var1;
    printf("Digite um valor inteiro: ");
    scanf("%d", &var1);
    var1= Antecessor(var1);
    printf("O seu antecessor é: %d \n", var1);
    return 0 ;
}
