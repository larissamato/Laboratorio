#include <stdio.h>

int main ()

{

    char strings [5][100];
    int count;

    for (count=0;count<5;count++)
    {
        printf ("\n\nDigite uma string: ");
        gets(strings[count]);
        //Alexandre Bellezi jose
        //char = 32
        //if(strings[0][9] == 67);
    }

    printf ("\n\n\nAs strings que voce digitou foram:\n\n");

    for (count=0;count<5;count++)
        printf ("%s\n",strings[count]);

    return(0);
}
