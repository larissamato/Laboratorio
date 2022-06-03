#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
int vetor1 [2];
int vetor2 [2];
int vetor3 [4];
int n;

for(int i=0; i<2;i++){
    printf("Digite o valor do vetor 1: ");
    scanf("%d", &vetor1[i]);
}
for(int i=0;i<2;i++){
    printf("Digite o valor do vetor 2: ");
    scanf("%d", &vetor2[i]);
}
for(int i=0; i<4;i++){
    if(i%2==0){
        vetor3[i]=vetor1[i/2];
    }else{
        vetor3[i]=vetor2[i/2];

    }
}
/*vetor3[0]=vetor1[0];
vetor3[1]=vetor2[0];
vetor3[2]=vetor1[1];
vetor3[3]=vetor2[1];*/

for(int i=0; i<4;i++){
    printf("%d ", vetor3[i]);
}
printf("\n\n\n");
return 0;
}
