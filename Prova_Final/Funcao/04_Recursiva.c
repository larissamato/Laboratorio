#include <stdio.h>
#include <stdlib.h>

//Protótipo
unsigned long fatorial(int num);


int main()
{   
    unsigned long fat;
    int num;

    printf("Digite um número:\n");
    scanf("%d", &num);
    getchar();

    fat = fatorial(num);

    printf("O fatorial de %d é %ld \n", num, fat);

    //fatorial(7);
    //printf("%ld\n", fatorial(7));
return 0;
}


unsigned long fatorial (int num)
{
    unsigned long result;

    if((num==1) || (num==0)) return (1);

    result=num*fatorial(num-1);

    return (result);

}