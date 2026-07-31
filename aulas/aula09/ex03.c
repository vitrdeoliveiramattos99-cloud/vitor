#include <stdio.h>

int somaDigitos(int n){
    if(n == 0){
        return 0;
    }

    int digitoAtual = n % 10;

    somaDigitos(n / 10);
    return digitoAtual + somaDigitos(n / 10);
}

int main(){

    int n;
    printf("Entre com um numero: ");
    scanf("%d", &n);

    int total = somaDigitos(n);

    printf("A soma do algarismo digitados foi: %d\n", total);

    return 0;
}