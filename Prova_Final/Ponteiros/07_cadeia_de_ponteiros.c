#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main ()
{
    int var;
    int *point1;
    int **point2;


    var = 15;
    point1= &var;
    point2 = &point1;

    printf("\n %d \n", **point2);
}