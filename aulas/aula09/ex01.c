#include <stdio.h>

int encontrarMaior(int v[], int n){
    if(n == 1){
        return 0;
    }

    int maiorResto = encontrarMaior(v + 1, n - 1);

    if(v[0] > maiorResto){
        return 0;
    } else {
        return maiorResto
    }
}

int main(){

    int vetor[] = {14, 3, 27, 8, 42, 5, 19};
    int tamanho = 7;

    int resultado = encontrar(vetor, tamanho);

    printf("O maior elemento encontrado no vetor e: %d\n", resultado);

    return 0;
}