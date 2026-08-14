#include <stdio.h>

int buscaBinaria(int v[], int n, int alvo){
   int ini = 0;
   int fim = n - 1;

   while(ini <= fim){
    int meio = (ini + fim) / 2;

    if(v[meio] == alvo){
        return meio;
    }
    else if(v[meio] < alvo){
        ini = meio + 1;
    }
    else if(v[meio] > alvo){
        fim = meio - 1;
    }
   }

   return -1;
}

int main(){

    int v[] = {1, 3, 5, 7, 9};
    int n = 5;
    int alvo = 5;
    int posicaoAlvo = buscaBinaria(v, n, alvo);

    printf("A posição do alvo eh: %d", posicaoAlvo + 1);

    return 0;
}