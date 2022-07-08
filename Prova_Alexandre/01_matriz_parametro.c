#include <stdio.h>
#define DIMENSAO 3

void lerMatriz(int matriz[][DIMENSAO])
{
    int linha,
        coluna;

    for(linha=0 ; linha < DIMENSAO ; linha++)
        for(coluna=0 ; coluna < DIMENSAO ; coluna++)
        {
            printf("Entre com o elemento matriz[%d][%d]: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }
}

void imprimirMatriz(int matriz[][DIMENSAO])
{
    int linha,
        coluna;

    for(linha=0 ; linha < DIMENSAO ; linha++)
    {
        for(coluna=0 ; coluna < DIMENSAO ; coluna++)
            printf("%3d ", matriz[linha][coluna]);

        printf("\n");
    }

}
//Traço soma dos elementos na diagonal principal
int traco(int matriz[][DIMENSAO])
{
    int count,
        traco=0;

    for(count=0 ; count < DIMENSAO ; count++)
        traco += matriz[count][count];

    return traco;
}

int main(void)
{
    int matriz[DIMENSAO][DIMENSAO];

    lerMatriz(matriz);
    imprimirMatriz(matriz);

    printf("\nTraco da matriz: %d\n", traco(matriz));

    return 0;


}