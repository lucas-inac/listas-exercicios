#include <stdio.h>
#include <stdlib.h>

int main() {

    // Escreva um programa para ordenar três números inteiros.

    // Numeros ordenados em ordem crescente.

    int num1;
    int num2;
    int num3;

    printf("Primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Terceiro numero inteiro: ");
    scanf("%d", &num3);

    if (num1 <= num2) {
        if (num2 <= num3) {
            printf("%d, %d, %d", num1, num2, num3);
        }
        else if (num1 <= num3) {
            printf("%d, %d, %d", num1, num3, num2);
        }
        else {
            printf("%d, %d, %d", num3, num1, num2);
        }
    }
    else if (num1 <= num3) {
        printf("%d, %d, %d", num2, num1, num3);
    }
    else if (num2 <= num3) {
        printf("%d, %d, %d", num2, num3, num1);
    }
    else {
        printf("%d, %d, %d", num3, num2, num1);
    }

    return 0;
}