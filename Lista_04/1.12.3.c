//usar o for

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
    float f=0.0, c=0.0;
    for(int i =50; i<=150;i++){
        f=i;
        c=(5*(f-32));
        c=c/9;
        printf("C = %f | F =  %f \n", f, c);
    }

return 0;
}
