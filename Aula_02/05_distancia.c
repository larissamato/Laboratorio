#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

float x1,y1,x2,y2,d,r = 0.0;



printf("Digite as coordenadas do ponto x1: ");
scanf("%f", &x1);
printf("Digite as coordenadas do ponto y1: ");
scanf("%f", &y1);
printf("Digite as coordenadas do ponto x2: ");
scanf("%f", &x2);
printf("Digite as coordenadas do ponto y2: ");
scanf("%f", &y2);
d= (x2-x1)*(x2-x1) + (y2-y1)-(y2-y1);
r= sqrt(d);
printf("A distância entre o ponto 1 até o ponto 2 é: %f \n ", r);

return 0;

}
//gcc 02_distancia.c -o a.out -lm
//./a.out