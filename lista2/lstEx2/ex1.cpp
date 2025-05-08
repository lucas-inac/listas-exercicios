#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que imprime se um inteiro é positivo ou negativo.

    int numero;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero negativo!");
    }
    else {
        printf("Numero positivo!");
    }

    return 0;
}