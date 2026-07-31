#include <stdio.h>

int somaDigitos(int n){
    if(n == 0){
        return n;
    }

    int digitoAtual = n % 10;
    return digitoAtual + somaDigitos(n /10);
}

int main(){

    int resultado, n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    resultado = somaDigitos(n);

    printf("A soma dos algarismos do numer eh: %d", resultado);
    return 0;
}