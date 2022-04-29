//Lista 2.9 - hipotenusa
#include<stdio.h>
#include<math.h>
int main(){

    float a, b, c,hipo;

    printf("Digite o valor dos catetos: \n ");
    scanf("%f %f", &b,&c);

    a = (c*c) + (b*b);
    hipo = sqrt(a);
    printf("A Hipotenusa mede: %f \n", hipo);


    return 0;
}