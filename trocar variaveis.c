#include <stdio.h>

int main() {
    int a, b;
    int *ptrA, *ptrB;

   
    ptrA = &a;
    ptrB = &b;

  
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

   
    *ptrA = *ptrA + *ptrB;
    *ptrB = *ptrA - *ptrB;
    *ptrA = *ptrA - *ptrB;

    
    printf("Valor atualizado de a: %d\n", a);
    printf("Valor atualizado de b: %d\n", b);

    return 0;
}