#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a,b,c,d,par=0;
    printf("Digite quatro valores: ");
    scanf("%d", &a);    
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    //se B>C e D>A  C+D > A+B C e D>0  A for par
 

    if ((b>c) && (d>a)&&(c+d>a+b)&&(c>0)&&(d>0)&&(a%2==0)){
        printf("Valores aceitos \n");
    }
    else{
        printf("Valores não aceitos \n");
    }
    return 0;
}