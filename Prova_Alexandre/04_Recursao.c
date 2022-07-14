#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

//Imprime uma string invertida
void contrario(char s[])
{
    if (s[0]!='\0')
    {
        contrario(&s[1]);
        printf("%c",s[0]);
    }
}

//Fatorial recursivo n!= n * (n -1)!
long int fatorial(int n)
{
    if(n == 0) /* condição de parada da recursão*/
        return 1;
    else if(n < 0)
    {
        printf ("Erro: fatorial de número negativo!\n");
        exit(0);
    }
    return n*fatorial(n-1);
}

//Descobir o tamanho da string usando recursão

int tamstring(char s[])
{
    if(s[0] == '\0')
        return 0;
    return 1+tamstring(&s[1]);
}

int main(void)
{
    char s[30],c;
    int t;
    printf("Imprime reverso\n\n");
    printf("\nDigite a string:  ");
    scanf("%s",s);
    contrario(s);
    getchar();

    printf("\nFatorial de 30: %ld ", fatorial(3));
    //fatorial(3) = 3x2x1 = 6

    printf("\nO tamanho da string s:'%s' e: %d",s,tamstring(s));
}





