#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que retorne o valor absoluto de um inteiro.

    int numero;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        numero = numero * (-1);
    }
    
    printf("Valor absoluto: %d", numero);

    return 0;
}