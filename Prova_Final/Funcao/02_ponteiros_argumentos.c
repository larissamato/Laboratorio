#include <stdio.h>
#include <stdlib.h>

void change(int *x, int *y);

int main(){

    int num1, num2;
    printf("Digite um número:");
    scanf("%d", &num1);
    getchar();
    printf("Digite outro número:");
    scanf("%d", &num2);
    getchar();

    printf("Os valores iniciais num1= %d num2= %d\n\n\n", num1, num2);

    change(&num1, &num2);
    printf("Os valores modificados num1= %d num2= %d\n\n\n\n", num1, num2);

}


void change (int *x, int *y){
    int temp;
    temp= *x;
    *x= *y;
    *y=temp;
}