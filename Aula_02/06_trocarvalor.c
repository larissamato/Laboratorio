#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
float var1,var2,reserva;
var1=90.0;
var2=50.0;
reserva=0.0;

reserva=var1;
var1=var2;
var2=reserva;
printf("variável 90 fica igual a %f \n", var1);
printf("variável 50 fica igual a %f \n", var2);


}