#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void removerVogais(char *original, char *semVogais) {
    while (*original) {
        char ch = *original;
        if (!strchr("aeiouAEIOU", ch)) { 
            *semVogais = ch;
            semVogais++;
        }
        original++;
    }
    *semVogais = '\0'; 
}

int main() {
    char original[100], semVogais[100];

    
    printf("Digite uma string: ");
    fgets(original, sizeof(original), stdin);

   
    char *posNovaLinha = strchr(original, '\n');
    if (posNovaLinha != NULL) {
        *posNovaLinha = '\0';
    }

   
    removerVogais(original, semVogais);

 
    printf("String sem vogais: %s\n", semVogais);

    return 0;
}