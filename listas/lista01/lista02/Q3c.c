#include <stdio.h> 
#include <string.h>

int ehPalidromo(char s[], int ini, int fim){
    if(ini >= fim){
        return 1;
    } 
    else if(s[ini] != s[fim]){
        return 0;
    }

    return ehPalidromo(s, ini + 1, fim - 1);
}

int main(){

    int ini = 0;
    int fim;
    char palavra[50];
    
    printf("Entre co uma palavra: ");
    scanf("%s", palavra);
    fim = strlen(palavra);

    if(ehPalidromo(palavra, ini, fim) == 0){
        printf("Eh palindromo\n");
    } else {
        printf("Nao eh palindromo\n");
    }

    return 0;
}