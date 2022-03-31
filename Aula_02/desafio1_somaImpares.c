#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float var1,var2,var3,var4,var5,soma;
    
    printf("Digite 5 números inteiros: ");
    scanf("%f %f %f %f %f", &var1, &var2,&var3,&var4,&var5);
    soma=(var1*(var1%2))+ (var2*(var2%2))+(var3*(var3%2))+(var4*(var4%2))+(var5*(var5%2));
    printf("A soma dos números ímpares é: %f" soma);
    return 0;
}