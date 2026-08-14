#include <stdio.h>

int buscaBinariaRec(int v[], int ini, int fim, int alvo){
    if(ini > fim){
        return -1;
    }
    int meio = (ini + fim) / 2;

    if(v[meio] == alvo){
        return meio;
    }
    else if(v[meio] < alvo){
        return buscaBinariaRec(v, meio + 1, fim, alvo);
    } else {
        return buscaBinariaRec(v, ini, meio - 1, alvo);
    }
}

int main(){

    int v[5];
    int ini = 0;
    int fim = 4;
    int alvo;
    
    printf("Entre com 5 algarismos em ordem...");
    for(int i = 0; i < 5; i++){
        printf("\nnumero %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Alvo: ");
    scanf("%d", &alvo);

    int resultado = buscaBinariaRec(v, ini, fim, alvo);
    if(resultado != -1){
        printf("O alvo esta na posicao %d do vetor", resultado + 1);
    } else {
        printf("Alvo nao encontrado.");
    }

    return 0;
}