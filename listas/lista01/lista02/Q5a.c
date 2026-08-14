#include <stdio.h>

int mdc(int a, int b){
    if(b == 0){
        return a;
    }

    return mdc(b, a % b);
}

int main(){

    int a = 48;
    int b = 18;
    int resultado  = mdc(a, b);

    printf("O MDC de (48, 18) eh: %d", resultado);

    return 0;
}