#include <stdio.h>

int main() {
    float numero; 
    float *ptrNumero; 
    float original; 

    
    ptrNumero = &numero;

    
    printf("Digite um valor real: ");
    scanf("%f", &numero);

    
    original = numero;

    
    *ptrNumero *= 2;

    
    printf("O valor original é: %.2f\n", original);
    printf("O dobro do valor é: %.2f\n", *ptrNumero);

    return 0;
}