#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa que realize a soma de dois números inteiros que são dados de entrada pelo usuário.

    int num1;
    int num2;

    int soma;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Segundo numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("Soma = %d", soma);

    return 0;
}