#include <stdio.h>
#include <string.h>

char *inverteTexto(char textoOriginal[]){
    int tamanhoString = strlen(textoOriginal)-1;
    char stringInvertida[100];


    for(int i=tamanhoString;i>=0;i--){
        //printf("\n String do textoOriginal na funcao: %c",textoOriginal[i]);
        stringInvertida[tamanhoString-i] = textoOriginal[i];
        //stringInvertida[5-5=0] = string[5] / stringInvertida[5-4=1] = string[4] / 5-3=2 3 / 5-2=3 2 / 5-1=4 1 /5-0=5 0
    }
        //Colocando de volta o '/0'
        stringInvertida[tamanhoString+1] = '\0';

        //for(int i = tamanhoString;i>=0;i--)
           // printf("%c", stringInvertida[i]);

           //*textoOriginal = &stringInvertida;
           strcpy(textoOriginal,stringInvertida);

    return &(textoOriginal[0]);
}

char *testeCharVetor(char entrada[]){
    entrada[0] = 'X';
    //entrada[11] = '\0';
    return &(entrada[0]);
}

int main ()
{
    char string[100] = "Alexandre";
    char stringInvertida[100];
    int tamanhoString = 0;

    printf ("Digite o texto para inverter: ");
    gets (string);
    printf ("\n\n Seu Texto original: %s",string);

    printf ("\n\n Seu Texto INVERTIDO: %s",inverteTexto(string));

    char explorarMemoria[100] = "Alo mundo da memoria...";

    for(int i = 0; i<= 100; i++){
        printf("%c",explorarMemoria[i]);
    }

 //printf("%s", testeCharVetor(string));

  return(0);
}