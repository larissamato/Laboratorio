#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float number1, number2, result=0.0;
    printf("\t\t\t\t\t\t ARITHMETIC MEAN CALCULATION\n");
    printf("Enter the first number: \n");
    scanf("%f", &number1);
    printf("\nEnter the second number: \n");
    scanf("%f", &number2);
    result= (number1+number2)/2.0;
    printf("\nThe result is: %f", result);
    printf("\n");
    return 0;
}
