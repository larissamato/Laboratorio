//Lista 2.10 - Soma dos números ímpares
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int var1,var2,var3,var4,var5,soma=0;
    
    printf("Digite 5 números inteiros: ");
    scanf("%d %d %d %d %d", &var1, &var2,&var3,&var4,&var5);
    soma=(var1*(var1%2))+ (var2*(var2%2))+(var3*(var3%2))+(var4*(var4%2))+(var5*(var5%2));
    printf("A soma dos números ímpares é: %d \n", soma);
    return 0;
}