#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somar (int a, int b){
    return a+b;
}

int subtrair (int a, int b){
    return a-b;
}

int multiplicar (int a, int b){
    return a*b;
}

int dividir (int a, int b){
    int retorno=0;
    if(b!=0){
        retorno=a/b;
    }
    return retorno;
}


int main()
{
    char ch='a';
    int num1=0,num2=0;
    printf("1.soma\n2.subtração\n3.multiplicação\n4.divisão\nq.sair\n");

    while(ch != 'q'){
        printf("Digite a opção desejada:");
        scanf("%c",&ch);
        getchar();

        if (ch!='q'){
            printf("Digite o primeiro número:");
            scanf("%i", &num1);
            getchar();
            printf("Digite o segundo número:");
            scanf("%i", &num2);
            getchar();

            if(ch=='1'){
                printf("Resultado:%d\n",somar(num1,num2));
            }if(ch=='2'){
                printf("Resultado:%d\n",subtrair(num1,num2));
            }if(ch=='3'){
                printf("Resultado:%d\n",multiplicar(num1,num2));
            }if(ch=='4'){
                printf("Resultado:%d\n",dividir(num1,num2));
            }
        }

    }
}


