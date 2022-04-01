#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float CalculoPontos (float x1, float y1, float x2,float y2){
float d, r =0.0;
d= (x2-x1)*(x2-x1) + (y2-y1)-(y2-y1);
r= sqrt(d); 
return r;
}


int main(void)
{
float x1,y1,x2,y2= 0.0;
printf("Digite as coordenadas do ponto x1: ");
scanf("%f", &x1);
printf("Digite as coordenadas do ponto y1: ");
scanf("%f", &y1);
printf("Digite as coordenadas do ponto x2: ");
scanf("%f", &x2);
printf("Digite as coordenadas do ponto y2: ");
scanf("%f", &y2);

if (x1>=0 && y1>=0 && x2>=0 && y2>=0)
{
    printf("A distância entre o ponto 1 até o ponto 2 é: %f \n ", CalculoPontos(x1,y1,x2,y1));
}
else
{
   printf("Digite um valor positivo! \n") ;
}
return 0;
}
