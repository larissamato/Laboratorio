#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//em sistemas antigos, um ponteiro sem inicialização daria tela azul, trata-se de um erro semântico
int *p= "Teste";
int main ()
{
    printf(p);
}