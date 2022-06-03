#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*Está disponível num equipamento de entrada de dados o estoque de mercadorias de uma loja. São dados os códigos das mercadorias e as respectivas quantidades existentes. A seguir, estão os pedidos dos clientes. Fazer um programa em C para atualização do estoque, tal que:

- seja lido e listado o estoque inicial (máximo de 100 mercadorias);

- sejam lidos os pedidos dos clientes, constituído, cada um, do número de cliente, código da mercadoria e quantidade desejada;

-seja verificado, para cada pedido, se ele pode ser integralmente atendido. Em caso negativo, imprima o número do cliente e a mensagemm "NÃO TEMOS A MERCADORIA EM ESTOQUE SUFICIENTE";

- seja atualizado o estoque após cada operação;

- seja listado o estoque final.

OBS: Considerar que, separando os dados do estoque inicial dos de pedidos, exista um dado cujo código de mercadoria é 999 e encerrando os pedidos haja um cliente fictício, cujo número é 999.*/
int estoque(){
printf("\t\t\t-------------- Estoque -------------------\n");
for(int i=0;i<5;i++){
    printf("Código: %d Quantidade: %d\n", codProduto[i], quantProduto[i]);
}
printf("--------------------------------------------------\n");
}

int main(){
int codProduto[5];
int quantProduto[5];
int cliente[5];
int quantidade;
int codProdutoCliente[5];

for(int i=0;i<5;i++){
    printf("Digite o código da mercadoria e a sua quantidade disponível no estoque:");
    scanf("%d %d", &codProduto[i], &quantProduto[i]);
    estoque();
}

for(int i=0; i<5; i++){
printf("Digite o número do cliente, código da mercadoria e quantidade desejada:");
scanf("%d %d %d", &cliente[i], &codProdutoCliente[i], quantidade);
}

if(quantidade > quantProduto[i]){
    printf("Sinto muito. Não há produtos suficientes.")
}
else if{
    quantProduto[i]=quantProduto[i]-quantidade;
    printf("Atualização do estoque:\n");
    estoque();

}

}