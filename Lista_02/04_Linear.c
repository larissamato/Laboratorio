//Lista 2.4 - Equação Linear
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    int a,b,c,d,e,f,x,y=0;
printf("Digite o valor a da equação linear:");
scanf("%d", &a);    
printf("Digite o valor b da equação linear:");
scanf("%d", &b);
printf("Digite o valor c da equação linear:");
scanf("%d", &c);
printf("Digite o valor d da equação linear:");
scanf("%d", &d);
printf("Digite o valor e da equação linear:");
scanf("%d", &e);
printf("Digite o valor f da equação linear:");
scanf("%d", &f);
x=(c*e-b*f)/(a*e-b*d);
y=(a*f-c*d)/(a*e-b*d);
printf("O resultado da equação é: x= %d, y= %d \n", x, y);
return 0;

}