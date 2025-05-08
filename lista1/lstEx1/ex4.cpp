#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
    Escreva um programa que receba dois valores e troque os mesmos (a = 1 e b = 2, mas no final, a == 2 e b ==1).
    Desafio: é possível fazer esse programa com só duas variáveis.
    */

    int a;
    int b;

    printf("Primeiro valor inteiro: ");
    scanf("%d", &a);

    printf("Segundo valor inteiro: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;

    a = a - b;

    printf("Valores trocados\n");

    printf("Primeiro valor: %d\n", a);
    printf("Segundo valor: %d", b);

    return 0;
}