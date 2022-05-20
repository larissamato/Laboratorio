#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
    bool flag=true;
    char nome;
    float precoCompra=0.0, precovenda=0.0, lucro=0.0;
    int menorigual10=0, menorque10=0, menorigual20=0,maiorque20=0, resposta=0;

    printf("\t\t\t LEVANTAMENTO DE LUCRO\n");
    while(flag==true){
        printf("Deseja adicionar mercadoria? Digite:\n|1|-> sim \n|2|-> nao.\n");
        scanf("%d", &resposta);
        getchar();
        if (resposta==1){
            printf("Digte o nome, valor da compra e valor da venda da sua mercadoria:");
            scanf("%c %f %f", &nome, &precoCompra, &precovenda);
            getchar();
            lucro=precovenda-precoCompra;
            lucro=lucro/precovenda*100;
            if (lucro==10){
                menorigual10=menorigual10+1;
            }
            else if (lucro<10){
                menorque10=menorque10+1;
            }else if(lucro==20){
                menorigual20=menorigual20+1;
            }else if(lucro>20){
                maiorque20=maiorque20+1;
            }
        }
        else if(resposta==2){
            flag=false;
         }
    }
    menorigual10= menorigual10+menorque10;
    menorigual20= menorque10+menorigual20;

    printf("Produtos com menos que dez por cento de lucro: %d \n", menorque10);
    printf("Produtos com menos ou igual a que dez por cento de lucro: %d \n", menorigual10);
    printf("Produtos com menos ou igual a vinte por cento de lucro: %d \n", menorigual20);
    printf("Produtos com mais  que vinte por cento de lucro: %d \n", maiorque20);
    return 0;
}
