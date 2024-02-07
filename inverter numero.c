#include <stdio.h>


void calcularInverso(int num, int *inverso) {
    *inverso = 0; 

    while (num != 0) {
        *inverso = *inverso * 10 + num % 10;
        num = num / 10;
    }
}

int main() {
    int numero, inverso;

 
    printf("Digite um numero: ");
    scanf("%d", &numero);

   
    calcularInverso(numero, &inverso);

    
    printf("O inverso do numero digitado eh: %d\n", inverso);

    return 0;
}
