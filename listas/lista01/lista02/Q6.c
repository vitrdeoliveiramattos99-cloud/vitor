#include <stdio.h>

int somaVetor(int v[], int n){
    if(n == 0){
        return 0;
    }

    return v[0] +  somaVetor(v + 1, n - 1);
}

int main(){

    int v[5], n = 5;
    printf("Entre com um vetor de ate 5 numeros...\n");
    for(int i = 0; i < 5; i++){
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int resultado = somaVetor(v, n);
    printf("A soma deste vetor eh: %d", resultado);

    return 0;
}