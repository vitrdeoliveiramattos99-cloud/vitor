#include <stdio.h>

int somaVetorRecursivo(int v[], int n){
    if(n == 0){
        return 0;
    }

    return v[0] + somaVetorRecursivo(v + 1, n - 1);
}

int somaVetorInterativo(int v[], int n){
    int soma = 0;

    for(int i = 0; i <= n - 1; i ++){
        soma += v[i];
    }
    return soma;
}

int main(){
    int vetor[5];
    int tamanho = 5;

    printf("Entre com até 5 algarismos... ");
    for(int i = 0; i < 5; i++){
        printf("\nAlgarismo %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

   int resRecursivo = somaVetorRecursivo(vetor, tamanho);
   int resInterativo = somaVetorInterativo(vetor, tamanho);

    printf("Resultado com Recursao: %d\n", resRecursivo);
    printf("Resulado com laco FOR: %d\n", resInterativo);

    return 0; 
}