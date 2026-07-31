#include <stdio.h>

int fatorial(int n){
    if( n == 0 || n == 1){
        return 1;
    }

    return n * fatorial(n - 1);
}

int main(){

    int resultado;
    int n;
    printf("Entre com um numero: ");
    scanf("%d", &n);

    resultado = fatorial(n);
    printf("O fatorial dele eh: %d", resultado);

    return 0;
}