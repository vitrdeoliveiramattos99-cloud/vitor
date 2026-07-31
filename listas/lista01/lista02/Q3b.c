#include <stdio.h>

int contarChar(char s[], int i, char c){
    if(s[i] == '\0'){
        return 0;
    }
    else if(s[i] == c){
        return 1 + contarChar(s, i + 1, c);
    } else {
        return contarChar(s, i + 1, c);
    }
}

int main(){

    char letra, palavra[50];
    int i = 0;
    int quantLetra = 0;

    printf("Entre com uma palvra: ");
    scanf("%s", palavra);
    printf("\nLetra destacada: ");
    scanf(" %c", &letra);

    quantLetra = contarChar(palavra, i, letra);
    printf("A letra %c aparece %d", letra, quantLetra);
    return 0;
}