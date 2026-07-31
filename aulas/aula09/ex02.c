#include <stdio.h>
#include <string.h>

void inverter(char s[], int ini, int fim){
    
    if(ini >= fim){
        return;
    }

    char aux = s[ini];
    s[ini] = s[fim];
    s[fim] = aux;

    inverter(s, ini + 1, fim - 1);
}

int main(){

    char palavra[50];

    printf("Entre com uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    int inicio = 0;
    int fim = tamanho - 1;

    inverter(palavra, inicio, fim);

    printf("Palavra invertida: %s\n", palavra);

    return 0;
}