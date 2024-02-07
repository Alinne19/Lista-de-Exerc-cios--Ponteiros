#include <stdio.h>

void trocarValores(int *ptrA, int *ptrB)
{
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main()
{
    int a, b, c;

    printf("Digite um valor inteiro para variavel a: ");
    scanf("%d", &a);

    printf("Digite um valor inteiro para variavel b: ");
    scanf("%d", &b);

    printf("Digite um valor inteiro para variavel c: ");
    scanf("%d", &c);

    if (a > b)
        trocarValores(&a, &b);
    if (b > c)
        trocarValores(&b, &c);
    if (a > b)
        trocarValores(&a, &b);

    
    printf("Números ordenados: %d, %d, %d\n", a, b, c);

    return 0;
}