#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{
    int *ponteiro1;
    int *ponteiro2;
    int variavel=500;

    ponteiro1 = &variavel;
    ponteiro2 = ponteiro1;

    printf("%p", ponteiro2);
    printf(" encontrasse o valor %d \n",*ponteiro2);

    int *itPoint;
    char *chPoint;
    float *flPoint;

    printf("%p\n", itPoint);
    itPoint++;
    printf("%p\n", itPoint);

    printf("%p\n", chPoint);
    chPoint++;
    printf("%p\n", chPoint);

return 0; 
}
