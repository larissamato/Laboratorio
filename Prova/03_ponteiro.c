#include <stdio.h>

int main() {
  int var, *p;
  var=10;
  p=&var;
    printf("O valor da variavel é %d\n", *p);
    printf("O endereco de memoria da variavel é: %p\n", p);
    printf("O endereco de memoria do ponteiro é:%p\n", &p);
    *p=15;
    printf("O novo valor da variavel é: %d \n", var);
    return 0;


}