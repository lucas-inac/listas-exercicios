#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que verifique se um número é par ou impar (o operadormódulo “%” retorna o resto da divisão).

    int numero;
    int resto;

    printf("Escreva um numero inteiro: ");
    scanf("%d", &numero);

    resto = numero % 2;

    if (resto == 1) {
        printf("Numero impar!");
    }
    else {
        printf("Numero par!");
    }

    return 0;
}