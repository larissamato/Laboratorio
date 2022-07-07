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

}


void change (int *x, int *y){
    int temp;
    temp= *x;
    *x= *y;
    *y=temp
}