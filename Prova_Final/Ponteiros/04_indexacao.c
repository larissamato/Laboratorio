#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main ()
{
     int matriz[10]={1,2,3,4,5,6,7,8,9,10};

     int *point, i;

     point=matriz;

     for(i=0;i<10;i++) printf("%d", *(point+i));

}