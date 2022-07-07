#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int *ponteiro;
    int variavel=250;
    int exibe;

    ponteiro = &variavel;
    exibe = *ponteiro;

    printf("%d\n", exibe);

return 0; 
}