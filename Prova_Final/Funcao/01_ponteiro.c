#include <stdio.h>
#include <stdlib.h>

char *findCharacter (char caractere, char *str);


int main(){
    char frase[80];
    char chr, *pointer;
    int num1, num2;
    printf("Digite uma frase: \n");
    scanf("%s", frase);
    getchar();
    printf("Digite um caracter:\n");
    scanf("%c", &chr);
    getchar();


    pointer=findCharacter(chr,frase);

    if(pointer) printf("\n\n\n%s\n\n\n", pointer);
    else printf("Nenhuma paridade\n");

}

char *findCharacter (char caractere, char *str){
    int counter=0;

    while((caractere !=str[counter]) && (str[counter]!='\0')) counter++;

    if (str[counter]) return (&str[counter]);
    else return (char *)'\0';


}