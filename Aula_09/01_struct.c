#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Empregado{
    int Empregado_ID;
    int idade;
    char Nome[50];
    char Departamento[20];
    float Salario;
};
int main(){
struct Empregado emp1 ={101,25,"David","vendas",1500.0};
struct Empregado emp2;
emp2.Empregado_ID=102;
emp2.idade=28;
strcpy(emp2.Nome, "CRISTIANO");
strcpy(emp2.Departamento,"Ciências");
emp2.Salario=3200.00;

printf("Empregado ID: %d\n", emp1.Empregado_ID);
printf("Empregado Nome %s\n", emp1.Nome);

return 0;
}